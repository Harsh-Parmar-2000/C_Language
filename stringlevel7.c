//  •	Count the frequency of each character in a string.
#include<stdio.h>
int main()
{
    int i,count=1,k,j;
    char name[20];
    printf("Enter A String :\n");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;name[j]!='\0';j++)
        {
            if(name[i]==name[j])
            {
                count++;
                for(k=j;name[k]!='\0';k++)
                {
                    name[k]=name[k+1];
                } 
                j--;
                k--;
            }
        }
        printf("%c frequency = %d\n",name[i],count);
    }
}