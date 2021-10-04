#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b;
	printf("Enter the value a &b\n");
	scanf("%d %d",&a,&b);
	if(a<b)
	{
		printf("%d is less then %d\n",a,b);
	}
	if(a<=b)
	{
		printf("%d is less thene equal %d\n",a,b);
	}
	if(a!=b)
	{
		printf("%d is not equl to %d\n",a,b);
	}
	if(a>b)
	{
		printf("%d is greater thene %d\n",a,b);
	}
	if(a>=b)
	{
		printf("%d is greter thene equal %d\n",a,b);
	}
	return 0;
}
