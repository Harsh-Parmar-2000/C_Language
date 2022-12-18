/*  Write a C program to compute the perimeter and area of a circle with a given radius. 
Expected Output:
Perimeter of the Circle = 37.680000 inches
Area of the Circle = 113.040001 square inches   */
#include<stdio.h>
int main()
{
    float r,per=0,area=0;
    printf("Give A Radius\n");
    scanf("%f",&r);
    area=3.14*(r*r);
    per=2*3.14*r;
    printf("Perimeter Of The Circle = %f inches\n",per);
    printf("Area Of The Circle = %f square inches",area);
}