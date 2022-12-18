//  •	Find the reverse of a string using pointers
#include<stdio.h>
int rever(char *);
int main()
{
    char c,name[20];
    printf("Enter A String :\n");
    gets(name);
    rever(name);
}
int rever(char * n)
{
    int len=0,i=0;
    while(n[i]!='\0')
    {
        len++;
        i++;
    }
     for(i=len-1;i>=0;i--)
     {
         printf("%c",n[i]);
     }
}


#include<stdio.h>
int main()
{
    int i,sp,j;
    for(i=1;i<=3;i++)
    {
        for(sp=1;sp<=3-i;sp++)
            printf("  ");
        for(j=1;j<=i;j++)
            printf("%c ",j+64);
        for(j=i-1;j>=1;j--)
            printf("%c ",j+64);
        printf("\n");
    }
}