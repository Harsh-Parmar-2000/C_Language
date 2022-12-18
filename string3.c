//  •	A String Is an Anagram or Not
#include<stdio.h>
int main()
{
    int i=0,check=0,j,count=0,count1=0;
    char name[20],ch,ch2,name2[20];
    printf("Enter A Sring :\n");
    scanf("%s",name);
    printf("Enter A Sring :\n");
    scanf("%s",name2);
    for(i=0;name[i]!=0;i++)
    {
        count++;
    }
    for(i=0;name2[i]!=0;i++)
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
                    ch=name[i];
                    name[i]=name[j];
                    name[j]=ch;
                }
            }
        }
        
        for(i=0;name2[i]!='\0';i++)
        {
            for(j=i+1;name2[j]!='\0';j++)
            {
                if(name2[i]>name2[j])
                {
                    ch2=name2[i];
                    name2[i]=name2[j];
                    name2[j]=ch2;
                }
            }
        }
                printf("%s",name);
                printf("%s",name2);
        
        for(i=0;i<count;i++)
        {
            if(name[i]!=name2[i])
            check++;
        } 
    }
    else
        check++;

        if(check==0)
        {
            printf("Anagram");
        }
        else
        printf("not Anagram");
}