//  •	Toggle case of each character of a string.
#include<stdio.h>
int main()
{
    int i;
    char name[20];
    printf("Enter A String :\n");
    scanf("%s",name);
    
        if(name[0]>='A'&&name[0]<='Z')
        name[0]=name[0]+32;

    for(i=1;name[i]!='\0';i++)
    {
        if(name[i]>='a'&&name[i]<='z')
        name[i]=name[i]-32;
    }
    printf("%s",name);
    
}