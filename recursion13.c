//  •	Display all array elements using recursion.
#include<stdio.h>
int elem(int arr[],int z,int num)
{
    if(num>z)
    {
        printf("%d ",arr[z]);
    }
    elem(arr,z+1,num);
}
int main()
{
    int i,arr[100],n;
    printf("Enter How Many Element U Want : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    elem(arr,0,n);
}