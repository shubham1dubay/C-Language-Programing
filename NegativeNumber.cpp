#include<stdio.h>
#include<conio.h>
int main()
{
	int num;
	printf("Enter the Number\n");
	scanf("%d",&num);
	if(num<0)
	{
		printf("Number entered is negative\n");
		num=-num;
	}
	printf("Value of Number%d\n",num);
	return 0;
}
