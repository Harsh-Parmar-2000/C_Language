#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
    int a,b,c;
    float r1=0,r2=0;
    printf("Enter Three Number For Roots\n");
    scanf("%d%d%d",&a,&b,&c);

    r1=(-b+sqrt((b*b)-4*a*c))/(2*a);
    printf("Root 1=%f\n",r1);

    r2=(-b-sqrt((b*b)-4*a*c))/(2*a);
    printf("Root 2=%f",r2);
    return 0;

}