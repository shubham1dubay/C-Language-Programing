#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,quo,rem;
	printf("Enter number used\n");
	scanf("%d %d",&x,&y);
	if(y)
	{
		quo=x/y;
		rem=x%y;
		printf("Quatient = %d\n Reminder=%d\n",quo,rem);
	}
	else
	printf("Diveid by zero error\n");
}
