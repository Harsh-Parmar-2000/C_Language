#include<stdio.h>
int main()
{
    float wgt,bmi,hgt;
    printf("Enter your weight or height\n");
    scanf("%f%f",&wgt,&hgt);

    bmi=wgt/(hgt*hgt);
    if(bmi<18.5)
    {
        printf("Under");
    }
    else if(bmi>18.5 &&bmi<24.9)
    {
        printf("normal");
    }
    else if(bmi>24.9&&bmi<29.9)
    {
        printf("overweight");
    }

    else if(bmi>30&&bmi<35)
    {
        printf("overweight");
    }
    else
    {
        printf("severe overweight");
    }
    printf("BMi=%f",bmi);
    return 0;
}