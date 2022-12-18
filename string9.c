//  •	Convert uppercase string to lowercase.
#include<stdio.h>
int main()
{
    char a[20];
    int i;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(a[i]>='A'&&a[i]<='Z')
        {
            a[i]=a[i]+32;
        }
    }
    printf("%s",a);
}