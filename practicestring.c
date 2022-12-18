•	String Char-Case Change
#include<stdio.h>
int main()
{
    char name[20];
    int i;
    printf("Enter A String :\n");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>='A'&&name[i]<='Z')
        {
            name[i]=name[i]+32;
        }
        else if(name[i]>='a'&&name[i]<='z')
        {
            name[i]=name[i]-32;
        }
    }
    printf("%s",name);
}
•	A String is Palindrome or Not
#include<stdio.h>
int main()
{
    char name[20],copy[20];                 //very important
    int i,count=0,flag=0;
    scanf("%s",name);    
    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
    for(i=0;name[i]!='\0';i++)
    {
        if(name[count-i-1]!=name[i])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Pallindrome");
    }
    else{
        printf("Not a Pallindrome");
    }
}
•	A String Is an Anagram or Not
#include<stdio.h>
int main()
{
    char temp=0,name[20],game[20];
    int flag=0,j,i,count=0,count1=0;
    printf("Enter A String:\n");
    scanf("%s",name);
    printf("Enter A String:\n");
    scanf("%s",game);
    for(i=0;name[i]!='\0';i++)                  //important
    {
        count++;
    }
    for(i=0;game[i]!='\0';i++)
    {
        count1++;
    }
    if(count==count1)
    {
    for(i=0;name[i]!='\0';i++)
    {
        for(j=i+1;name[j]!='\0';j++)
        {
            if(name[i]>name[j])
            {
                temp=name[i];
                name[i]=name[j];
                name[j]=temp;
            }
        }
    }
    for(i=0;game[i]!='\0';i++)
    {
        for(j=i+1;game[j]!='\0';j++)
        {
            if(game[i]>game[j])
            {
                temp=game[i];
                game[i]=game[j];
                game[j]=temp;
            }
        }
    }
    }
    else
        flag++;
    for(i=0;name[i]!='\0';i++)
    {
        if(game[i]!=name[i])
        {
            flag=1;
        }
    }
    printf("%s\n",name);
    printf("%s\n",game);
    if(flag==0)
    {
        printf("Anagram");
    }
    else
    {
        printf("Not A Anagram");
    }
}
•	Find the length of a string.

•	Copy one string to another string.

•	Concatenate two strings.
#include<stdio.h>
int main()
{
    char a[20],game[20],name[20];
    int i,j=0;
    printf("Enter A String:\n");
    scanf("%s",name);
    printf("Enter A String:\n");
    scanf("%s",game);
    for(i=0;name[i]!='\0';i++)
    {
        a[j]=name[i];
        j++;
    }
    for(i=0;game[i]!='\0';i++)
    {
        a[j]=game[i];
        j++;
    }
    a[j]='\0';
    puts(a);
}
•	Compare two strings.
•	Convert lowercase string to uppercase.
•	Convert uppercase string to lowercase.
•	Toggle case of each character of a string.
#include<stdio.h>
int main()
{
    char name[20];
    int i;
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>='A'&&name[i]<='Z')
        {
            name[i]=name[i]+32;
        }
        else if(name[i]>='a'&&name[i]<='z')
        {
            name[i]=name[i]-32;
        }
    }
    printf("%s",name);
}
•	Find a total number of alphabets, digits or special character in a string.
#include<stdio.h>
int main()
{
    char name[20];
    int i,count=0,dig=0,spec=0;
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]>='A'&&name[i]<='Z'||name[i]>='a'&&name[i]<='z')
        {
            count++;
        }
        if(name[i]>=49&&name[i]<=57)
        {
            dig++;
        }
        if(name[i]>90&&name[i]<97||name[i]>1&&name[i]<49)
        {
            spec++;
        }
    }
    printf("Alphaates:%d\n",count);
    printf("Digits:%d\n",dig);
    printf("SC:%d\n",spec);
}

•	Count the total number of vowels and consonants in a string.
#include<stdio.h>
int main()
{
    char name[20];
    int i,vow=0,cons=0,count=0;
    printf("Enter A String:\n");
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='A'||name[i]=='E'||name[i]=='I'||name[i]=='O'||name[i]=='U'||name[i]=='a'||name[i]=='e'||name[i]=='i'||name[i]=='o'||name[i]=='u')
        {
            count++;
        }
        else
        {
            cons++;
        }
    }
    printf("Vowel=%d\n",count);
    printf("Constant=%d\n",cons);
}
•	Count the total number of words in a string.
#include<stdio.h>
int main()
{
    char name[20];
    int i,count=1,ctr=0;
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        while(name[i]!=name[i+1])
        {
        if(name[i]==' ')
        {
            count++;
        }                                                   //    important
        i++;
        }
    }
    printf("Total Words:%d",count);
}
•	Find the reverse of a string.
•	Check whether a string is a palindrome or not.
#include<stdio.h>
int main()
{
    char name[20];
    int flag=0,i,count=0;
    scanf("%s",name);
    for(i=0;name[i]!='\0';i++)
    {
        count++;
    }
    
    for(i=0;name[i]!=0;i++)
    {
        if(name[i]!=name[count-i-1])
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("Pallindrome");
    }
    else
    printf("Not A Pallindrome");
}
•	Reverse order of words in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char name[20];
    int i,c=0;
    gets(name);                                 //          important
    c=strlen(name);
    for(i=c-1;i>=0;i--)
    {
        if(name[i]==' ')
        {
            name[i]='\0';
            printf("%s ",&name[i]+1);
        }
    }
    printf("%s ",name);
}
