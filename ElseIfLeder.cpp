#include<stdio.h>
#include<conio.h>
int main()
{
	float m1,m2,m3,m4,totel,per;
	char gread;
	printf("Enter markes 4 subjects\n");
	scanf("%f%f%f%f",&m1,&m2,&m3,&m4);
	totel=m1+m2+m3+m4;
	per=totel/4;
	if(per>85)
	gread='A';
	else if(per>75)
	gread='B';
	else if(per>65)
	gread='C';
	else if(per>55)
	gread='D';
	else
	gread='E';
	printf("Parcenteg %f\n  Gread%c",per,gread);
	return 0;
}
