//  •	Concatenate two strings.
#include<stdio.h>
int main()
{
    char c[20],a[20],b[20];
    int i,len=0;
    printf("Enter First String :\n");
    scanf("%s",a);
    printf("Enter First String :\n");
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        c[len]=a[i];
        len++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        c[len]=b[i];
        len++;
    }
    c[len]='\0';
    
        printf("%s",c);
          
}
