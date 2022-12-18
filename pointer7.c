//  •	Search an element in an array using pointers.
#include<stdio.h>
int main()
{
    int i,n,a[20],ele;
    int * ptr=a;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    printf("Enter A Number To Search :\n");
    scanf("%d",&ele);
    ptr=a;
    for(i=0;i<n;i++)
    {
        if(ele==*ptr)
        {
            printf("%d Founded At %d\n",*ptr,i);
        }
        ptr++;
    }
}