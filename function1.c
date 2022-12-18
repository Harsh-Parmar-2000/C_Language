// •	Cube of any number using the function
#include<stdio.h>
int func(int);
int main()
{
    int val,cube=0;
    printf("enter A Number To Find Cube =");
    scanf("%d",&val);
    cube=func(val);
    printf("Cube=%d",cube);
}
int func(int x)
{
    int cub=x*x*x;
}