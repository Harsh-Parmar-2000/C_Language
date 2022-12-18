/*Write a C program that read the item’s price 
and create new item price and increased price of that item according to the item price table. */
#include<stdio.h>
int main()
{
    float price,newpr,inc;
    float per;
    printf("Input The Item's Price\n");
    scanf("%f",&price);
    printf("Input The New Item's Price\n");
    scanf("%f",&newpr);
    inc=newpr-price;
    printf("Value=%.2f",inc);
    per=((inc/price)*100);
    printf("Percentage Increased= %.2f percent",per);
}