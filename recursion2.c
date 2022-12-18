//•	Print all natural numbers between 1 to n using recursion.
#include<stdio.h>
int nature(int,int);
int main()
{
    int n=5,j=0,i=1;
    printf("Enter A Value To Print Numbers : ");
    //scanf("%d",&n);
    nature(n,i);
}
int nature(int n,int i)
{
    if(n>=i)
    printf("%d ",i);
    
    nature(n,i+1);
}