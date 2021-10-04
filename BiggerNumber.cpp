#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the first number\n");
	scanf("%d %d",&a,&b);
	if(a>b )
	{
		printf("Bigger Number A %d",a);
	}
	else 
	{
		printf("Bigger Number B %d",b);
	}
	return 0;
}
