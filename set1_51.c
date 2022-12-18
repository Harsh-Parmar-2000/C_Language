/*Write a C program to read an array of length 6, change the first element by the last, 
the second element by the fifth and the third element by the fourth. 
Print the elements of the modified array. */
#include<stdio.h>
void main()
{
    int tmp,i,j,num[6];
    printf("Enter 6 Numbers\n");
    for(i=0;i<=5;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<=5;i++)
    {
    if(i<3)
    {
        tmp=num[i];
        num[i]=num[6-(i+1)];
        num[6-(i+1)]=tmp;
    }
    }
    for(i=0;i<=5;i++)
    {
        printf("%d\n",num[i]);
    }
}