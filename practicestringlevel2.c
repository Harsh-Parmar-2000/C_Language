•	Find the first occurrence of a character in a given string.
#include<stdio.h>
int main()
{
    char name[20],ch;
    int i,k=0;
    gets(name);
    printf("enter A String To Search:\n");
    scanf("%c",&ch);
    for(i=0;name[i]!='\0';i++)
    {
        if(ch==name[i])
        {
            printf("%d",i+1);
            k=1;
            break;
        }
    }
    if(k==0)
    {
        printf("Not Found");
    }
}
•	Find the last occurrence of a character in a given string.
#include<stdio.h>
int main()
{
    char name[20],ch;
    int i,k=0,ij=0;
    gets(name);
    printf("enter A String To Search:\n");
    scanf("%c",&ch);
    for(i=0;name[i]!='\0';i++)
    {
        if(ch==name[i])
        {
            ij=i;
            k=1;
        }
    }
    if(k==0)
    {
        printf("Not Found");
    }
    else
    printf("%d",ij+1);
}
•	Search all occurrences of a character in a given string.
#include<stdio.h>
int main()
{
    char name[20],ch;
    int i,k=0;
    gets(name);
    printf("enter A String To Search:\n");
    scanf("%c",&ch);
    for(i=0;name[i]!='\0';i++)
    {
        if(ch==name[i])
        {
            printf("%d\n",i);
            k=1;
        }
    }
    if(k==0)
    {
        printf("Not Found");
    }
}
•	Count occurrences of a character in a given string.

•	Find the highest frequency character in a string.
#include<stdio.h>
int main()
{
    char name[20];
    int i,j,k,max=0,pos=0,count=0;
    printf("Enter A String:\n");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        count=0;
        for(j=i+1;name[j]!='\0';j++)                    //      important
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
            if(count>max)
            {
                max=count;
                pos=i;
            }
        }
    }
    printf("Highest =%d TIme Char %c",max+1,name[pos]);
}
•	Find the lowest frequency character in a string.
#include<stdio.h>
int main()
{
    char str[22];
    int i,j,k,pos=0,min=0,count=0;
    printf("Enter A string:\n");
    gets(str);
    min=str[0];
    for(i=0;str[i]!='\0';i++)
    {
        count=0;
        for(j=i+1;str[j]!='\0';j++)
        {
            if(str[i]==str[j])
            {
                count++;
                for(k=j;str[k]!='\0';k++)
                {
                    str[k]=str[k+1];
                }
                k--;
                j--;
            }
        }
            if(count<min)
            {
                min=count;
                pos=i;
            }
    }
    printf("Lowest Frequency =%d of %c",min+1,str[pos]);
}
•	Count the frequency of each character in a string.
#include<stdio.h>
int main()
{
    char a[20];
    int i,j,k,count=0;
    printf("Enter A String To Find Frequency:\n");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {                                           // important
        count=0;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count++;
                for(k=j;a[k]!='\0';k++)
                {
                    a[k]=a[k+1];
                }
                // j--;
                // k--;
            }
        }
        printf("%c is %d time\n",a[i],count+1);
    }
}
•	Remove the first occurrence of a character from a string.
#include<stdio.h>
int main()
{
    char b,a[20];
    int i,j;
    printf("Enter A String:\n");
    gets(a);
    printf("Enter A Character:\n");
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(b==a[i])
        {
            for(j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
            break;
        }
    }
    printf("%s",a);
}
•	Remove the last occurrence of a character from a string.
#include<stdio.h>
int main()
{
    char b,a[20];
    int i,j,pos=0;
    printf("Enter A String:\n");
    gets(a);
    printf("Enter A Character:\n");
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(b==a[i])
        {
            pos=i;
        }
    }
    for(j=pos;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
    printf("%s",a);
}
•	Delete all occurrences of a character from a string.
#include<stdio.h>
int main()
{
    char b,a[20];
    int i,j,pos=0;
    printf("Enter A String:\n");
    gets(a);
    printf("Enter A Character:\n");
    scanf("%c",&b);
    for(i=0;a[i]!='\0';i++)
    {
        if(b==a[i])
        {
             for(j=i;a[j]!='\0';j++)
            {
                a[j]=a[j+1];
            }
        }
    }
    printf("%s",a);
}
•	Remove all repeated characters from a given string.
#include<stdio.h>
int main()
{
    char b,a[20];
    int i,j,pos=0,k;
    printf("Enter A String:\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        for(j=i+1;a[j]!='\0';j++)
        {
        if(a[i]==a[j])
        {
            for(k=j;a[k]!='\0';k++)
            {
                a[k]=a[k+1];
            }
        }
        }
    }
    printf("%s",a);
}
•	Replace the first occurrence of a character with another in a string.
•	Replace the last occurrence of a character with another in a string.
•	Put all occurrences of a character with another in a string.
•	Find the first occurrence of a word in a given string.
#include<stdio.h>
int main()
{
    char str[20],word[20];
    int i,j,flag=1;
    printf("Enter A String");
    gets(str);
    printf("Enter A String");
    gets(word);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==word[0])
        {
            flag=1;
            for(j=0;word[j]!='\0';j++)
            {
                if(str[i+j]!=word[j])
                {
                    flag=0;
                    break;
                }
            }
        }
        if(flag==1)
        {
            break;
        }
    }
    if(flag==0)
    {
        printf("Sorry not found\n");
    }
    else{
        printf("%s founded on %d",word,i+1);
    }
}
•	Find the last occurrence of a word in a given string.
#include<stdio.h>
int main()
{
    char str[20],word[20];
     int i,flag=1,j=0,pos;
     printf("Enter A String:\n");
     gets(str);
     printf("Enter A Word:\n");
     gets(word);
     for(i=0;str[i]!='\0';i++)
     {
         flag=1;
         if(str[i]==word[0])
         {
             for(j=0;str[j]!='\0';j++)
             {
                if(str[i+j]!=word[j])
                {
                    pos=i;
                    flag=0;
                }
             }
         }
     }

             if(flag==1)
         {
             printf("Founded At %d",pos);
         }
}
•	Search all occurrences of a word in a given string.
#include<stdio.h>
int main()
{
    char word[20],str[20];
    int i,j,flag=1;
    printf("Enter A String:\n");
    gets(str);
    printf("Enter A Word:\n");
    gets(word);
    for(i=0;str[i]!='\0';i++)
    {
        flag=1;
        if(str[i]==word[0])
        {
            for(j=0;word[j]!='\0';j++)
            {
                if(str[i+j]!=word[j])
                {
                    flag=0;
                }
            }
            if(flag==1)
            {
                printf("Word Founded At %d\n",i);
            }
        }
    }
}
•	Count occurrences of a word in a given string.
#include<stdio.h>
int main()
{
    char word[20],str[20];
    int i,j,flag=1,count=0;
    printf("Enter A String:\n");
    gets(str);
    printf("Enter A Word:\n");
    gets(word);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==word[0])
        {
            for(j=0;word[j]!='\0';j++)
            {
                if(str[i+j]!=word[j])
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
    }
    printf("\nOccurrences:%d",count);
}
•	Remove the first occurrence of a word from the string.
#include<stdio.h>
int main()
{
    char str[20],word[20];
    int i,j,flag=0;
    printf("Enter A String:\n");
    gets(str);
    printf("Enter A Word:\n");
    gets(word);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]==word[0])
        {
            for(j=0;word[i]!='\0';j++)
            {
                if(str[i+j]!=word[j])
                {
                    flag=1;
                    break;
                }
            }
            if(flag==0)
            {

            }
        }
    }
}
•	Remove the last occurrence of a word in a given string.
•	Delete all occurrence of a word in a given string.
•	A Trim leading white space characters from a given string.
•	Trim trailing white space characters from a given string.
•	Trim both leading and trailing white space characters from a given string.
•	Remove all extra blank spaces from the given string.
#include<stdio.h>
int main()
{
    char a[20];
    int i,j,k,count=0;
    printf("Enter A String:\n");
    gets(a);
    for(i=0;a[i]!='\0';i++)
    {
        count=1;
        for(j=i+1;a[j]!='\0';j++)
        {
            if(a[i]==a[j])
            {
                count++;
                for(k=j;a[k]!='\0';k++)
                {
                    a[k]=a[k+1];
                }
                k--;
                j--;
            }
        }
        printf("\n%d------%c",count,a[i]);
    }
}