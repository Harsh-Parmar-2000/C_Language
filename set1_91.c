// Write a C program to find the angle between (12:00 to 11:59) the hour hand and the minute hand of a clock
#include<stdio.h>
void main()
{
    int h,m;
    long angle;
    printf("Enter Hour hand and Minute hand");
    scanf("%d%d",&h,&m);

    angle=(30*h)-(5.5*m);
    printf("%ld",angle);
}