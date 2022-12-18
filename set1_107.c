// Write a C program that accepts an integer and print next ten consecutive odd and even numbers. 
#include<stdio.h>
int main()
{
    int a=0,val,i;
    printf("Enter A Value to Print Even Or Odd\n");
    scanf("%d",&val);
     
    printf("Odd Number\n");
    for(i=val+1;a<10;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            a++;
        }
    }
    printf("\n\nEven  Number\n");
    a=0;
    for(i=val+1;a<10;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
            a++;
        }
    }
    
}
