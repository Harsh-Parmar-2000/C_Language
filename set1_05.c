/*  Write a C program to compute the perimeter and area of a rectangle with a height of 7 inches. and width of 5 inches. 
Expected Output:
Perimeter of the rectangle = 24 inches
Area of the rectangle = 35 square inches    */
#include<stdio.h>
int main()
{
    int ht=7,wd=5;
    printf("Perimeter Of The Rectangle : %d inches\n",2*(ht+wd));
    printf("Area Of The Rectangle : %d inches",ht*wd);
}