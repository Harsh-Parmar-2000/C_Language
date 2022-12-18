// Write a program in C to display the sum of the series [ 1+x+x^2/2!+x^3/3!+
#include<stdio.h>
#include<math.h>
int main()
{
    int val=0,term=0,fact=1,power=0,i;
    float div=0,sum=1;
    printf("Enter A value = ");
    scanf("%d",&val);
    printf("Enter How Many Term = ");
    scanf("%d",&term);
    for(i=1;i<term;i++)
    {
        power=pow(val,i);
        fact=fact*i;
        div=(float)power/fact;
        sum=sum+div;
    }
    printf("%.2f",sum);
}