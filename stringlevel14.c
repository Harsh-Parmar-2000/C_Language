//  •	Put all occurrences of a character with another in a string.
#include<stdio.h>
int main()
{
    int i;
    char c,name[20];
    puts("Enter A String :");
    gets(name);
    puts("Enter A String :");
    scanf("%c",&c);
    
    for(i=0;name[i]!='\0';i++)
    {
        if(c==name[i])
        {
            if(name[i]!=name[i+1])
            name[i]=name[i+1];
            else
            name[i]=name[i+2];
        }
    }
    printf("%s",name);
}