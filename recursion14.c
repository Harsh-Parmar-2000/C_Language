//  •	Display all array elements using recursion.
#include<stdio.h>
int elem(int arr[],int z,int num,int sum)
{
    if(num>z)
    {
        sum=sum+arr[z];
        printf("%d ",arr[z]);
    }
    else{
        return sum;
    }
    elem(arr,z+1,num,sum);
}
int main()
{
    int i,arr[100],rec=0,n,sum=0;
    printf("Enter How Many Element U Want : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    rec=elem(arr,0,n,sum);
    printf("\nthe sum of all array element =%d ",rec);
}