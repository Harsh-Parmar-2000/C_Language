/* Write a C program that accepts integers from the user until a zero or a negative number, 
display the number of positive values, the minimum value, the maximum value and the average of all numbers. */
#include<stdio.h>
void main()
{
    int i,num[20],j=0,max=0,sum=0;
    for(i=0;;i++)
    {
        scanf("%d",&num[i]);
        if(num[i]<=0)
        {
            break;           
        }        
        j=j+1;
        if(num[i]>max)
        {
            max=num[i];
        }
        sum=sum+num[i];
    } 
        printf("Total %d\n",sum);
        printf("Maximum=%d\n",max);
        printf("average=%d",sum/j);
}