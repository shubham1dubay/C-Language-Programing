#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);
	if(num%2==0)
	{
		printf("number is Even\n");
	}
	else
	{
		printf("Number Is odd\n");
		num*=2;
		printf("Now the number %d\n",num);
	}
	return 0;
	
}
