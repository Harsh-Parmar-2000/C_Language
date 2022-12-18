/*  Write a C program that reads an array of integers (length 7), and replace the first element of the array
by a give number and replace each subsequent position of the array by the double value of the previous*/
#include<stdio.h>
int main()
{
    int a[7],i,s,ctr=0,f;
    printf("Enter A First Element\n");
  
    for(i=0;i<=7;i++)
    {
       scanf("%d",&s);
      printf("double=\n%d\n",s);
      goto out;
    }
    out :
      printf("");
      f=s;
    for(i=0;i<6;i++)
    {
       f=f*2;
       printf("%d\n",f);
    }
}