//  •	In short How to Copy one string to another using pointer.
#include<stdio.h>
char copy(char *,char *);
int main()
{
    char name[20],n[20];
    printf("Enter A String :\n");
    gets(name);
    copy(name,n);
    printf("Enter=%s",n);
}
char copy(char * s,char * c)
{
    while(*s!='\0')
    {
        *c=*s;
        c++;
        s++;
    }
    *c='\0';
}