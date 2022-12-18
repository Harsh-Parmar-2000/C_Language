//  •	Search all occurrences of a word in a given string
#include<stdio.h>
int main()
{
    int i,j,flag=0,k=0;
    char name[50],word[50];
    printf("Enter A String :\n ");
    gets(name);
    printf("Enter A Word TO Search :\n ");
    gets(word);
    int len=strlen(word);
    for(i=0;name[i]!='\0';i++)
    {
        while(word[k]==name[i]&&k<len)
        {
            flag=1;
            for(j=0;word[j]!='\0';j++)
            {
                if(word[j]!=name[j+i])
                {
                    flag=0;
                }
                if(flag==1)
                {
                    printf("Found At %d\n",i);
                    break;
                }
            
            }
            k++;
        }
        k=0;
    }
}