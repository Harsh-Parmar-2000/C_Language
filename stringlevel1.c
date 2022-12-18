//Find The First occurence of a character in a string
#include<stdio.h>
int main()
{
    int i,k=0;
    char str[20],ch;
    printf("Enter A String :\n");
    gets(str);
    printf("Enter A Character To Find It's First Occurence :\n");
    scanf("%c",&ch);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==ch)
        {
            printf("First Occurence %d Position",i+1);
            k=1;
            break;
        }
    }
    if(k==0)
    {
        printf("Not Found");
    }
} 