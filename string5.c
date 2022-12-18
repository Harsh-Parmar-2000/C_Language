//  •	Copy one string to another string.
#include<stdio.h>
int main()
{
    char name[20],copy[20];
    int i=0;
    printf("Enter First String :\n");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        copy[i]=name[i];
    }
    copy[i]='\0';
    printf("%s",copy);
}