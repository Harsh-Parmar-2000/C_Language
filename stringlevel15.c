//  •	Find the first occurrence of a word in a given string.
#include<stdio.h>
int main()
{
    int i,flag=0,j;
    char name[20],word[20];
    printf("Enter A String :\n");
    gets(name);
    printf("Enter A Word To Find :\n");
    gets(word);
    for(i=0;name[i]!='\0';i++)
    {
        if(word[0]==name[i])
        {
            for(j=0;word[j]!='\0';j++)
            {
                flag=1;
                if(name[i+j]!=word[j])
                {
                flag=0;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
     if(flag==1)
        {
            printf("we found the word on %d",i);
        }
        else{
            printf("Word Not Found");
        }
}