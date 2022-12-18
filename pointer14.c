//  •	Compare two strings using pointers.
#include<stdio.h>
int compare(char *,char *);
int main()
{
    int i=0;
    char name[20],name1[20];
    printf("Enter A String :\n");
    gets(name);
    printf("Enter A String :\n");
    gets(name1);
    i=compare(name,name1);  
    printf("\n%d",i);
}
int compare(char * a,char * b)
{
    while(*a!='\0')
    {
        if(*a!=*b)
        {
            return *a-*b;
        }
        a++;
        b++;
    }
}