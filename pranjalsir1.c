#include<stdio.h>
int main()
{
    int i,sub;
    for(i=0;i<3;i++)
    {
        scanf("%d",&sub);
        if(sub==5)
        {
            printf("You Are Pass");
        }
        else{
            i--;
        }
    }
    return 0;
}