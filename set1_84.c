 // Write a C program to calculate and print the average of some integers. Accept all the values preceding 888. 
#include<stdio.h>
void main()
{
    int i=1,num[20];
    float sum=0,avg=0;
    printf("Enter Values To Average(Exit With 888)");
    for(i=1;i>0;i++)
    {
        scanf("%d",&num[i]);
            if(num[i]==888)
        {
            break;
        }
        else{
        sum=sum+num[i];
        avg=sum/i;
        }
    }
    printf("%f",avg);
}