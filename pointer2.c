//  •	Swap two numbers using pointers
#include<stdio.h>
int swap(int *,int *);
int main()
{
    int a=5,b=10;
    swap(&a,&b);
    printf("A\t=\t%d\tB\t=\t%d",a,b);
}
int swap(int * a,int * b)
{
    int t;
    t=*a;
    *a=*b;
    *b=t;
}