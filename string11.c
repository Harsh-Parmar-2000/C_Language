//  •	Find a total number of alphabets, digits or special character in a string.
#include<stdio.h>
int main()
{
    int i,count=0,special=0,digit=0;
    char name[20];
    printf("Enter A String :\n");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>=65 &&  name[i]<=90  ||  name[i]>=97 &&  name[i]<=122)
        {
            count++;
        }
        if(name[i]>=33 &&  name[i]<=47  ||  name[i]>=58 &&  name[i]<=64  ||  name[i]>=91 &&  name[i]<=96)
        {
            special++;
        }
        if(name[i]>=48 &&  name[i]<=57)
        {
            digit++;
        }
    }
    printf("Alphabates =%d\n",count);
    printf("Special =%d\n",special);
    printf("Digits =%d\n",digit);
}