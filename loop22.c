/* Write a program in C to print the Floyd's Triangle. 
1 
01
101 
0101 
10101 */ 
#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
                if(i%2==0)
                {
                    if(j%2==0)
                    {
                        k=1;
                        printf("%d",k);
                    }
                    else{
                        k=0;
                        printf("%d",k);
                    }
            }
            else
            {
            if(j%2==0)
 +           {
                k=0;
                printf("%d",k);
            }
            else{
                k=1;
                printf("%d",k);
            }
            }
        }
     printf("\n");
    }
}