//  •	String Char-Case Change
#include<stdio.h>
int main()
{
    char name[20];
    int count=0,i=0;
    printf("Enter Name :\n");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65&&name[i]<=90)
        name[i]=name[i]+32;
        else if(name[i]>=97&&name[i]<=122)
        name[i]=name[i]-32;
    }
    printf("%s",name);
}