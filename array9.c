//  •	Sum of all array elements. – using recursion.
#include<stdio.h>
int arrsum(int a[],int,int,int);
int main()
{
    int a[20],n,i,d=0;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    d=arrsum(a,n,0,0);
    printf("Sum Of All Array = %d",d);
}
int arrsum(int array[],int size,int i,int sum)
{
    if(i<size)
    sum=sum+array[i];
    else
    return sum;
    arrsum(array,size,i+1,sum);
}