//  •	Reverse order of words in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    int i=0,c;
    char name[120];
    printf("Enter A Sentence To Find Reverse Of Words : \n");
    gets(name);
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

#include<stdio.h>
int main()
{
    int i=(1,2,3);
    printf("I=%d\n",i);
}

#include<stdio.h>
int main()
{
    int c=5,no=1000;
  //  do{
        no/=0;
//    }while(c--);
    printf("%d\n",no);
    return 0;
}

#include<stdio.h>
int main()
{
    char *s[]={"Knowledge","is","power"};
    char **p;
    p=s;
    printf("%s ",++*p);
    printf("%s ",*p++);
    printf("%s ",++*p);
}

#include<stdio.h>
int main()
{
    printf("%d",sizeof(9));
    return 0;
}

#include<stdio.h>
int f1(){printf("geeks");return 1;}
int f2(){printf("quiz");return 1;}
int main()
{
    int p=f1()+f2();
}