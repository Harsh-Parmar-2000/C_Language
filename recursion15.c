//  •	Find maximum and minimum elements in an array using recursion.
#include<stdio.h>
int max(int arr[],int n,int,int);
int min(int arr[],int n,int,int);
int main()
{
    int arr[10],n,m=1,j=0,i,k=0;
    printf("Enter How Many Element U Want :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    j=max(arr,n,0,m);
    k=min(arr,n,0,m=arr[0]);
    printf("---------%d",j);
    printf("---------%d",k);
}
int max(int arr[],int n,int i,int m)
{
    if(n>i)
    {
    if(arr[i]>m){
        m=arr[i];
    }
    }
    else
    {
        return m;
    }
    max(arr,n,i+1,m);   
}
int min(int arr[],int n,int i,int m)
{
    if(n>i)
    {
    if(arr[i]<m){
        m=arr[i];
    }
    }
    else
    {
        return m;
    }
    min(arr,n,i+1,m);   
}