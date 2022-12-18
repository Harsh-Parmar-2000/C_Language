#include<stdio.h>
int avg(int[],int);
void main()
{
    int a,marks[5]={1,2,3,4,5};
    a=avg(marks,5);
    printf("average=%d",a);
}
int avg(int marks[],int a)
{
    int sum=0,i=0,avg=0; 
    for(i=0;i<a;i++)
    {
        sum=sum+marks[i];
    }
    avg=sum/a;
    return avg;
}

