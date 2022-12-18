//  •	Delete Element From Array At Desired Or Specific Position
#include<stdio.h>
int main()
{
    int arr[10],n,i,val;
    printf("Enter How Many Element : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);   
    }
    printf("\nEnter A Element To Delete : ");
    scanf("%d",&val);
    val--;
    for ( i = val; i < n; i++)
    {
        arr[i]=arr[i+1];
        
    }
    n--;  
    for(i=0;i<n;i++)
    {
        printf("%d  ",arr[i]);   
    }
}