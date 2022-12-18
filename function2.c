//	Find diameter, circumference and area of a circle using functions.
#include<stdio.h>
int diam(int);
float circ(float);
float area(float);
int main()
{
    int i,vald=0,rad;
    float valc=0,vala=0;
    printf("Enter A Radius Of Circle = ");
    scanf("%d",&rad);
    vald=diam(rad);
    valc=circ(rad);
    vala=area(rad);
    printf("%d %f %f",vald,valc,vala);
}
int diam(int val)
{
    int di=0;
    di=val*2;
    return di;
}
float circ(float val)
{
    float di=0;
    di=2*3.14*val;
    return di;
}
float area(float val)
{
    float di=0;
    di=3.14*val*val;
    return di;
}