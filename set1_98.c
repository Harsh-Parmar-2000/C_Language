// Write a C program which accepts some text from the user and prints each word of that text in separate line.
#include<stdio.h>
int main()
{
     char *s,tex[200];
     int word,count;
     printf("Enter a Sentence\n");
     scanf("%[^#]s",&tex);
     s=tex;
    while(*s!='\0')
    {
        if(*s==' '||*s=='\t'||*s=='\n')
        {
            *s='\n';
        }   
        *s++;
    }
    printf("%s",tex);
}