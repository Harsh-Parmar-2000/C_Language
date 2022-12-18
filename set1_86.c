#include<stdio.h>
void main()
{
    int a,b;

    float c=30.21;
    double d=3.142252;
    short s=3522;
    char f='h';
    long int g=3.1241;
    a=sizeof(b);
    printf("Int=%d",a);
    printf("Size Of Float=%d",sizeof(c));
    printf("Sizee Of Double=%d",sizeof(d));
    printf("Sizee Of short=%d",sizeof(s));
    printf("Sizee Of char=%d",sizeof(f));
    printf("Sizee Of long int=%d",sizeof(g));
}