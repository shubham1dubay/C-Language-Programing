#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num;
	long fact=1;
	printf("Enter a number\n");
	scanf("%d",&n);
	num=n;
	if(n<0)
	printf("No Factorial Of Nagative number\n");
	else 
	{
		while(n>1)
		{
			fact*=n;
			n--;
		}
		printf("Factorial of %d=%d\n",num,fact);
	}
	return 0;
}
