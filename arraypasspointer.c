//  Demonstration Of Call By Refernce OR Call By Value
#include<stdio.h>
void display1(int);
void display2(int *);
int main()
{
    int i;
    int marks[]={1,2,3,4,5};
    for(i=0;i<=4;i++)
        display1(marks[i]);
        printf("\n");
    for(i=0;i<=4;i++)
        display2(&marks[i]);
}
void display1(int m)
{
    printf("%d\t",m);
}
void display2(int * n)
{
    printf("%d\t",*n);
}