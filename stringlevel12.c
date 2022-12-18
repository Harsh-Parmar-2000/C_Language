//  •	Replace the first occurrence of a character with another in a string.
#include<stdio.h>
int main()
{
    int i,j;
    char ch,name[20];
    puts("Enter A String :");
    gets(name);
    puts("Enter A Character To Find First Occurence :");
    scanf("%c",&ch);
    for(i=0;name[i]!='\0';i++)
    {
        if(ch==name[i])
        {
            name[i]=name[i+1];
            break;
        }
    }
    printf("%s",name);
}