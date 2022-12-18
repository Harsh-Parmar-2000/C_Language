#include<stdio.h>
void main()
{
    int sec,h,m,s;
    printf("Enter Seconds");
    scanf("%d",&sec);
    
    h=sec/3600;
    m=(sec-(h*3600))/60;
    s=sec-((h*3600)+(m*60));
    printf("Entered sec in hours:minutes:seconds");
    printf("%d:%d:%d",h,m,s);
}