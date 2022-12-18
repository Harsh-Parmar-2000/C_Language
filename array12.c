//  •	Count the total number of even and odd elements in an array.
#include<stdio.h>
int main()
{
    int n,arr[20],even=0,odd=0,i;
    printf("Enter How Many Element U Want In Ur Array : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("\nTotal Number Of Even Element : %d",even);
    printf("\nTotal Number Of Odd Element : %d",odd);
}