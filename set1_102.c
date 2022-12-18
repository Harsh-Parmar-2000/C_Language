/* Write a C program that reads three integers
and sort the numbers in ascending order. Print the original numbers and sorted numbers. */
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Three Number\n");
    scanf("%d%d%d",&a,&b,&c);

    if(a<=b && b<=c)
    {
        printf("%d%d%d",a,b,c);
    }
    else if(b<=a && a<=c)
    {
        printf("%d%d%d",b,a,c);
    }
    else if(c<=b && b<=a)
    {
        printf("%d%d%d",c,b,a);
    }
    else if(c<=a && a<=b)
    {
        printf("%d%d%d",c,a,b);
    }
    else if(b<=c && c<=a)
    {
        printf("%d%d%d",b,c,a);
    }
    else if(b<=a && a<=c)
    {
        printf("%d%d%d",a,c,b);
    }
    else{
        printf("No Value");
    }
    return 0;
}