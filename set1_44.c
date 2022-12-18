#include<stdio.h>
void main()
{
    int i,a[20],n=0,sum=0;
    float avg;
    printf("Enter Values To Average\n");
    for(i=1;;i++)
    {
    scanf("%d",&a[i]);
    if(a[i]==0){
        break;
    }         
    sum=sum+a[i];
    n=n+1;
    }
    avg=sum/n;
    printf("Average=%f",avg);
}