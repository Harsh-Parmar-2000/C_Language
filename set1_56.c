// Write a C program to shift given data by two bits to the left. 
#include<stdio.h>
void main()
{
    int a,b;
    printf("Enter A Integer\n");
    scanf("%d",&a);

    a<<=2;
    b=a;
    printf("After Shift=%d",b);
}