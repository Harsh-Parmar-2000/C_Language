/*Write a C program that accepts seven floating point numbers and count the number of positive and negative numbers.
Also print the average of all positive and negative values with two digit after the decimal number. */
#include<stdio.h>
int main()
{
    float sum=0,negsum=0,pos=0,neg=0,a[7],i;
    for(i=0;i<7;i++)
    {
        scanf("%f",&a[i]);
    }
     for(i=0;i<7;i++)
    {
       if(a[i]>0)
       {
           sum=sum+a[i];
           pos=pos+1;
       }
       else{
           negsum=negsum+a[i];
           neg=neg+1;
       }
    }
    printf("\npositive number enter =%f sum of positive =%f",pos,sum);
    printf("\nnegative number enter =%f sum of negative =%f",neg,negsum);
}