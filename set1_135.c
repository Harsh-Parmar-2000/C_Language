/* Write a C program which reads an integer n and 
find the number of combinations of a, b, c and d (0 <= a, b, c, d <= 9) where (a + b + c + d) will be equal to n */
#include<stdio.h>
int main()
{
    int a,b,c,d,n,sum=0,cnt=0;
    printf("Enter A Number To Find Combinations\n");
    scanf("%d",&n);
    for(a=0;a<=n;a++)
    {
        for(b=0;b<=n;b++)
        {
            for(c=0;c<=n;c++)
            {
                for(d=0;d<=n;d++)
                {
                    sum=a+b+c+d;
                    if(sum==n)
                    {
                        printf("%d,%d,%d,%d\n",a,b,c,d);
                        cnt++;
                    }
                }
            }
        }
    }
    printf("Count=%d",cnt);
}