#include<stdio.h>
#include<conio.h>
int main()
{
	int year;
	printf("Enter the Leap yrea program\n");
	scanf("%d",&year);
	if(year%100 !=0)
	{
		if(year%4==0)
		printf("Leap year\n");
		else 
		printf("Not leap year\n");
	}
	else
	{
		if(year%4==0)
		printf("Leap year\n");
		else 
		printf("Not Leap year");
	}
	return 0;
}
