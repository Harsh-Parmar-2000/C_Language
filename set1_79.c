#include<stdio.h>
void main()
{
    int i,x;
    printf("x\tx+2\tx+4\tx+6\n");
    printf("----------------------------\n");
    for(i=1;i<=13;i+=3)
    {
        printf("%d\t%d\t%d\t%d",i,i+2,i+4,i+6);
        printf("\n");
    }
}