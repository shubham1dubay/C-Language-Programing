#include<stdio.h>
int main()
{
	int i=1,n;
	printf("Enter the number\n");
	scanf("%d",&n);
	do
	{
		printf("%d\n",i);
		i=i*2;
	}
	while(i<=n);
}
