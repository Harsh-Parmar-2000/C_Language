#include<stdio.h>
void main()
{
    int a[7],i,s;
    printf("Replace Negative Number");
    for(i=0;i<7;i++)
    {
        
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        if(a[i]>0)
        {
            printf("%d Number is =%d\n",i,a[i]);
        }
        else{
            s=a[i];
            s=100;
            printf("%d Number is =%d\n",i,s);
        }
    }
}