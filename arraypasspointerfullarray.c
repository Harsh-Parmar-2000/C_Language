//  Demonstration Of Passing An Array To A Function
#include<stdio.h>
void display1(int *,int);
void display2(int [],int);
int main()
{
    int num[]={20,25,30,35,40,45,50};
    display1(&num[0],6);
    printf("\n");
    display2(&num[0],6);
}
void display1(int * j,int n)
{
    int i;
    for(i=0;i<=n;i++)
    {
        printf("%d\t",*j);
        j++;
    }
}
void display2(int arr[],int size)
{
    int i;
    for(i=0;i<=size;i++)
    {
        printf("%d\t",arr[i]);
    }
}