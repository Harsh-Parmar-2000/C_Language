//  •	Insert An Element Desired or Specific Position In An Array
#include<stdio.h>
int main()
{
    int arr[20],i,lim,new,pos;
    printf("How Many Elements Do U Want In Ur Array : ");
    scanf("%d",&lim);
    for(i=0;i<lim;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("\nEnter A New Element : ");
    scanf("%d",&new);
    printf("\nEnter A Position To Enter Element At That Position : ");
    scanf("%d",&pos);
    lim++;
    for(i=lim-2;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=new;
    printf("Array After : ");
    for(i=0;i<lim;i++)
    {
        printf("%d ",arr[i]);
    }
}