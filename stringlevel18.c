//  •	Count occurrences of a word in a given string.
#include<stdio.h>
int main()
{
    int i,j,flag=0,count=0;
    char name[50],word[50];
    printf("Enter A String :\n");
    gets(name);
    printf("Enter A Word :\n");
    gets(word);
    for(i=0;name[i]!='\0';i++)
    {
        flag=0;
        for(j=0;word[j]!='\0';j++)
        {
            flag=1;
            if(word[j]!=name[i+j])
            {
                flag=0;
                break;   
            }
        }
        if(flag==1)
        {
            count++;
        }
    }
    if(count>0)
    printf("Count =%d",count);
    else
    printf("Not Found");
}