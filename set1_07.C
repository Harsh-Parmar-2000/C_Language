/*Write a C program to display multiple variables. 
Sample Variables :
a+ c, x + c,dx + x, ((int) dx) + ax, a + x, s + b, ax + b, s + c, ax + c, ax + ux
Declaration :
int a = 125, b = 12345;
long ax = 1234567890;
short s = 4043;
float x = 2.13459;
double dx = 1.1415927;
char c = 'W';
unsigned long ux = 2541567890;*/
#include<stdio.h>
int main()
{
    int a = 125, b = 12345;
    long ax = 1234567890;
    short s = 4043;
    float x = 2.13459;
    double dx = 1.1415927;
    char c = 'W';
    unsigned long ux = 2541567890;
    printf("%d\n",a+c);
    printf("%f\n",x + c);
    printf("%lf\n",dx + x);
    printf("%ld\n",(int) dx + ax);
    printf("%f\n",a+x);
    printf("%d\n",s + b);
    printf("%ld\n",ax + b);
    printf("%c\n",s + c);
    printf("%ld\n",ax + c);
    printf("%u\n",ax + ux);
}