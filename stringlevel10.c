//  •	Delete all occurrences of a character from a string.
#include<stdio.h>
int main()
{
    int i,j;
    char name[120],ch;
    printf("Enter A String :\n");
    gets(name);
    printf("Enter A Character To Delete All:\n");
    scanf("%c",&ch);
    for(i=0;name[i]!='\0';i++)
    {
            if(ch==name[i])
            {
                for(j=i;name[j]!=0;j++)
                name[i]=name[i+1];
                i--;
            }
    }
    printf("%s",name);
}