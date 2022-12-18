#include<stdio.h>
void main()
{
    int size,j,i;
    printf("Enter Size Of Square Using Hash");
    scanf("%d",&size);

    for(i=0;i<size;i++)
    {
       for(j=0;j<size;j++)
       {
           if(i==0||i==size-1)
           {
               printf("#");
           }
           else if(j==0||j==(size-1))
           {               
               printf("#");
           }
           else{
               printf(" ");
           }
          
       }
 printf("\n");
    }
}