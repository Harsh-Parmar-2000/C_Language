/*Write a C program that accepts a positive integer n less than 100 from the user 
and prints out the sum 14 + 24 + 44 + 74 + 114 + • • • + m4 , 
where m is less than or equal to n. Print appropriate message. */

#include<stdio.h>
#include<math.h>
void main()
{
    int i,j=0,num,new=0;
    double sum=0;
    printf("Enter A Positive Integer");
    scanf("%d",&num);

    if(num<100)
    {
        for(i=1;i<=num;i++)
        {
            sum=pow(i,4);
            printf("%d\n",i);
            i=i+j;
            ++j;
            new=new+sum;
        }
        printf("sum=\n\n%d",new);
    }
}