#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
	int m1,m2;
    float n1,n2;
    scanf("%d %d",&m1,&m2);
    scanf("%f %f",&n1,&n2);
    
    printf("%d %d\n",m1+m2,m1-m2);
    printf("%.1f %.1f",n1+n2,n1-n2);
    return 0;
}
