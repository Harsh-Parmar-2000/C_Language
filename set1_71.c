// Write a C program to copy a given string into another and count the number of characters copied. 
#include<stdio.h>
void main()
{
    char name[20],temp[20],name1[20];
    int i,g=0;
    printf("Enter A String\n");

    scanf("%s",&name);

    printf("1st string=%s\n",name);
    for(i=0;name[i]!='\0';i++)
    {
        temp[i]=name[i];
        g=g+1;
    }
    printf("char =  %d\n",g);
    temp[i]='\0';
    printf("%s\n",temp);
    
}