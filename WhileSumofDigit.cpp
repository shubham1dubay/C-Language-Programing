#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,rem;
	printf("Enter a number\n");
	scanf("%d\n",&n);
	while(n>0)
	{
		rem=n%10;
		sum+=rem;
		n/=10;
	}
	printf("sum of digit=%d\n",sum);
	return 0;
}
