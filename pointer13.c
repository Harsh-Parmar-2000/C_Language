//  •	Concatenate two strings using pointers.
#include<stdio.h>
char strc(char *,char *,char *);
int main()
{
    char name[20],name2[20],name3[20];
    printf("Enter 1st String :\n");
    gets(name);
    printf("Enter 2nd String :\n");
    gets(name2);
    strc(name,name2,name3);
    printf("%s",name3);
}
char strc(char * a,char *b,char * c)
{
    while(*a!='\0')
    {
        *c=*a;
        a++;
        c++;
    }
    while(*b!='\0')
    {
        *c=*b;
        b++;
        c++;
    }
    *c='\0';
}