#include<stdio.h>
void main()
{
    int i,j,size;
    printf("Enter Size Between 1 To 10");
    scanf("%d",&size);
    if(size>0&&size<10)
    {
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            printf("#");
        }
        printf("\n");
    }
    }
    else{printf("Invalid Value");}
}