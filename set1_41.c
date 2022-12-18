#include<stdio.h>
void main()
{
    int l,i,j,h=1;
    printf("How Many Lines\n");
    scanf("%d",&l);

    for(i=0;i<l;i++)
    {
        for(j=1;j<=3;j++)
        {
        printf("%d\t",h);
        h=h+1;
        }
        printf("\n");
    }
    
}