// •	Find the power of any number using recursion.
#include<stdio.h>
int power(float,int);
int main()
{
    float sum=0,a;
    int b;
    printf("Enter A Value : ");
    scanf("%f",&a);
    
    printf("Enter A Value To Power : ");
    scanf("%d",&b);
    sum=power(a,b);
    printf("%.2f To The Power of %d = %f ",a,b,sum);
}
int power(float x,int y)
{
    if(y==0)
        return 1;
    else
        return x*power(x,y-1); 
}