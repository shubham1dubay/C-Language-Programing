#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter number used\n");
	scanf("%d",&num);
	while(num>=1)
	{
		printf(" %d",num);
		num=num-1;
	}
	printf("\n");
	return 0;
}
