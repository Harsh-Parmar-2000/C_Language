//Write a C program to count blanks, tabs, and newlines in an input text. 
#include<stdio.h>
int main()
{
    int word=0,line=0,tline=0;
    char *c,sen[200];
    printf("Write A Text");
    scanf("%[^z]s",&sen);
    c=sen;
    printf("\n\n%s",c);
    while(*c!='\0'){
       if (*c==' ')
       {
          word++;
       }
       if (*c=='\n')
       {
          line++;
       }
       if (*c=='\t')
       {
          tline++;
       }
    *c++;
    }
    printf("tab %d space %d line %d",tline,word,line);
}