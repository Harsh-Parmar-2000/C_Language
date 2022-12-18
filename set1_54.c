#include<stdio.h>
void main()
{
    float cm,inch;
    printf("Enter CM to Convert In Inches\n");
    scanf("%f",&cm);
    inch=cm/2.54;
    printf("Inches=%.2f",inch);
}