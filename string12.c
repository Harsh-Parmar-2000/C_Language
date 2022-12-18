//  •	Count the total number of vowels and consonants in a string.
#include<stdio.h>
int main()
{
    int i,consonants=0,vowel=0;
    char name[20];
    printf("Enter A String  : \n");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'||name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            vowel++;
        }
        else if(name[i]>='a'&&name[i]<='z'    ||  name[i]>='A'  &&    name[i]<='Z')
        {
            consonants++;
        }
    }
    printf("\nVowel = %d",vowel);
    printf("\nConsonants = %d",consonants);
}