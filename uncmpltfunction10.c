//•	Find the power of any number using recursion.
#include<stdio.h>
int power(float,float);
int main()
{
    float val,num=0;
    float terms;
    printf("Enter A Value :");
    scanf("%f",&val);
    printf("Enter Power Value");
    scanf("%f",&terms);
    num=power(val,terms);
    printf("%f to the Power Of %f = %f",val,terms,num);
}
int power(float x,float y)
{
    float sum;
    if(y>0)
    {
        sum=sum*x;
        printf("%f   ",sum);
        y=y-1;
        power(sum,y);
    }
    return sum;
}