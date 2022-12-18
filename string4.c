//  •	Find the length of a string.
#include<stdio.h>
int main()
{
    char name[20];
    int count=0,i=0;
    printf("Enter Name :\n");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
    printf("Count %d",count);
}