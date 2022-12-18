//  •	Get the second largest element in an array.
#include<stdio.h>
int second(int a[],int,int,int);
int main()
{
    int n,i,a[20],sec=0;
    printf("Enter How Many Element U Want In Ur Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    second(a,n,0,sec);  
}
int second(int array[],int size,int i,int store)
{
    for(int j=0;j<size;j++)
    {
        if(array[j]>store)
        {
            i=store;
            store=array[j];
        }
        else if(array[j]>i)
        {
            i=array[j];
        }
    }
    printf("Second Largest Element =%d",i);
}