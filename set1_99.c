// Write a C program that takes some integer values from the user and print a histogram
#include<stdio.h>
int main()
{
    int num,i=0,j,val[10];
    printf("Enter How Many Values\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&val[i]);
    }
    for(i=0;i<num;i++)
    {
    for(j=0;j<val[i];j++)
    {
        printf("#");
    }
    printf("\n");
    }
    
}