//  •	Replace the last occurrence of a character with another in a string.
#include<stdio.h>
int main()
{
    int i,j,pos=0;
    char a,name[20];
    puts("Enter A String :");
    gets(name);
    puts("Enter A String :");
    scanf("%c",&a);
    for(i=0;name[i]!='\0';i++)
    {
        if(a==name[i])
        {
            pos=i;
        }
    }
    name[pos]=name[pos-2];
    printf("%s",name);
}