/* Write a C program to read an array of length 6 and find the smallest element and its position. 
Test Data:
Input the length of the array: 5 Input the array elements:
25
35
20
14
45
Expected Output:
Smallest Value: 14
Position of the element: 3  */
#include<stdio.h>
int main()
{
    int arr[50],n,i,temp=0,pos=0,min=0;
    printf("Input The Length Of The Array : ");
    scanf("%d",&n);
    printf("\nInput The Array Elements : \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
     min=arr[0];
    for(i=1;i<n;i++)
    {
       if(arr[i]<min)
        {
            min=arr[i];
            pos=i;
        }
    }
    printf("%d position value= %d",pos,arr[pos]);
}