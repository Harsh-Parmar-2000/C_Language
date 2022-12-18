//  •	Remove the last occurrence of a character from a string.
#include<stdio.h>
int main()
{
    int i,j,k,last=0;
    char name[20],inp;
    printf("Enter A String :\n");
    gets(name);
    printf("Enter A Character To Delete First Occurence : \n");
    scanf("%c",&inp);
    for(i=0;name[i]!='\0';i++)
    {
         if(inp==name[i])
        {
            last=i;      
        }
   }
   for(j=last;name[j]!='\0';j++)
    {
     name[j]=name[j+1];
    //j--;
    }
    printf("%s",name);
}