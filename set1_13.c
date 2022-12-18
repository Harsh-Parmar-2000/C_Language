#include<stdio.h>
int main()
{
    int a,b,c;

    printf("Enter Three No. To Find Maximum\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>b)
    {
        if(a>c)
        {
            printf("A Is Greatest");
        }
        else{
            printf("C is Greatest");
        }
    }
    else{
        if(b>c)
        {
            printf("B is Greatest");
        }
        else{
            printf("C is Greatest");
        }
    }
    return 0;

}