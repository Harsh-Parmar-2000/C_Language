#include<stdio.h>
int main()
{
    int word=0,tab=0,line=0,ch=0;
    char *j,s[200];
    printf("Enter How Many lines");
    scanf("%[^*]",s);
    j=s;
    while(*j!='\0')
    {
        ch++;
        if(*j==' '||*j+1==' ')
        {
            *j==' ';
        word++;
        }
        if(*j=='\t')
        tab++;
        if(*j=='\n')
        line++;
        *j++;
    }
    printf("%d Character In Ur Sentence\n",ch);
    printf("%d line In Ur Sentence\n",line);
    printf("%d tab In Ur Sentence\n",tab);
    printf("%d blanks In Ur Sentence\n",word);    
}