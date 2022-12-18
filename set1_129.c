/* Write a C program that reads an array (length 10), and replace the first element of the array by a give number 
and replace each subsequent position of the array by one-third value of the previous*/
#include<stdio.h>
int main()
{
    int i;
    float val,a[10];
    printf("Enter A Number\n");
    scanf("%f",&val);
    a[0]=val;
    for(i=1;i<10;i++)
    {
        val=val/3;
        a[i]=val;
    }
     for(i=0;i<10;i++)
    {
       printf("%.2f ",a[i]);
        
    }
}