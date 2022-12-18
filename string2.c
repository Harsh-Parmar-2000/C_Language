//  A String Is Pallindrome Or Not
#include<stdio.h>
int main()
{
    char ch,name[20],copy[20];
    int count=0,i=0,flag=0;
    printf("Enter Name :\n");
    scanf("%s",name);
    // for(i=0;name[i]!='\0';i++)
    // {
    //     copy[i]=name[i];
    // }
    // copy[i]='\0';
    for(i=0;name[i]!='\0';i++)
    {
        count++;
     }
    // for(i=0;i<count/2;i++)
    // {
    //     ch=name[i];
    //     name[i]=name[count-1-i];
    //     name[count-1-i]=ch;
    // }
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]!=name[count-1-i])
        {
            flag++;
        }
    }
    if(flag==0)
    {
        printf("String Is Pallindrome");
    }
    else
    printf("Not A Pallindrome");
}