//  •	Remove all repeated characters from a given string.
#include<stdio.h>
int main()
{
    int i,j,k;
    char name[20];
    printf("Enter A String :\n");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        for(j=i+1;name[j]!='\0';j++)
        {
            if(name[i]==name[j])
            {
                for(k=j;name[k]!='\0';k++)
                {
                    name[k]=name[k+1];
                }
               // k--;
               // j--;
            }
        }
    }
    printf("%s",name);
}