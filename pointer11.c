//  •	Find the length of the string using pointers.
#include<stdio.h>
int strnl(char * );
int main()
{
    int len1=0;
    char name[20];
    printf("Enter A String :\n");
    gets(name);
    len1=strnl(name);
    printf("Length Of The String = %d",len1);
}
int strnl(char * s)
{
    int len=0;
    while(*s!='\0')
    {
        len++;
        s++;
    }
    return len;
}