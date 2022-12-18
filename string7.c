//  •	Compare two strings.
#include<stdio.h>
int main()
{
    char a[20],b[20];
    int counta=0,flag=0,countb=0,i;
    printf("Enter First String :\n");
    scanf("%s",a);
    printf("Enter Second String :\n");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        counta++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        countb++;
    }
    if(counta==countb)
    {
        for(i=0;i<counta;i++)
        {
            if(a[i]!=b[i])
            {
                flag++;
            }
        }
    }
    else
    flag++;
    
    if(flag==0)
        printf("Same");
    else
        printf("Not Same");
}