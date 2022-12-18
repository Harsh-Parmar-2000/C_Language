//  Calculate Area And Perimeter Using Pointer
#include<stdio.h>
int calcu(int,float *,float *);
int main()
{
    int r;
    float area,peri;
    printf("Enter A Radius To Find Area & Perimeter :\n");
    scanf("%d",&r);
    calcu(r,&area,&peri);
    printf("Area=%f",area);
    printf("\nPerimeter=%f",peri);
}
int calcu(int r,float * area,float * peri)
{
    *area=3.14*r*r;
    *peri=2*3.14*r;
}