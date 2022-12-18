•	Add two numbers using pointers.
#include<stdio.h>
int main()
{
    int sum=0,a,b,*p,*q;
    printf("Enter Two Value :\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    sum=*p+*q;
    printf("\nSum=%d",sum);
}
•	Swap two numbers using pointers.
#include<stdio.h>
int main()
{
    int sum=0,a,b,*p,*q,temp=0;
    printf("Enter Two Value :\n");
    scanf("%d%d",&a,&b);
    p=&a;
    q=&b;
    printf("First=%d\tSecond=%d\n",*p,*q);
    temp=*p;
    *p=*q;
    *q=temp;
    printf("\nFirst=%d\tSecond=%d",*p,*q);
}
•	Input and print array elements using a pointer.
#include<stdio.h>
int main()
{
    int a[20],*p,i,n;
    printf("Enter Elements U Want:\n");
    scanf("%d",&n);
    p=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",p);
        p++;
    }
    p=a;
    for(i=0;i<n;i++)
    {
        printf("%d ",*p);
        p++;
    }
}
•	Copy one array to another using pointer.
#include<stdio.h>
int main()
{
    int a[20],*ptr,b[20],*bptr,n,i;
    ptr=a;
    bptr=b;                                     // important
    printf("Enter Size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    ptr=a;
    for(i=0;i<n;i++)
    {
        *bptr=*ptr;
        ptr++;
        bptr++;
    }
    bptr=b;
    for(i=0;i<n;i++)
    {
        printf("%d ",*bptr);
        bptr++;
    }
    ptr=a;
    for(i=0;i<n;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
}
•	Swap two arrays using pointers.
#include<stdio.h>
int main()
{
    int n,a[20],b[20],*ptr,*bptr,i;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    ptr=a;
    bptr=b;
    printf("Enter Array 1 :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    printf("Enter Array 2 :\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",bptr);
        bptr++;
    }

    ptr=a;
    bptr=b;
    for(i=0;i<n;i++)
    {
        int temp=0;
        temp=*bptr;
        *bptr=*ptr;
        *ptr=temp;
        ptr++;
        bptr++;
    }
    ptr=a;
    bptr=b;
    printf("\nEnter Array 1 :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }
    printf("\nEnter Array 2 :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",*bptr);
        bptr++;
    }
}
•	Reverse an array using pointers.
#include<stdio.h>
int main()
{
    int a[20],i,n,*ptr;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    ptr=a;
    for(i=0;i<n;i++)
    {                       
        scanf("%d",ptr);
        ptr++;
    }                                               // very very important
    for(i=0;i<n;i++)
    {
        ptr--;
        printf("%d ",*ptr);
    }
}
•	Search an element in an array using pointers.
#include<stdio.h>
int main()
{
    int a[20],i,n,*ptr,ser;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    ptr=a;
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr);
        ptr++;
    }
    printf("Enter Size Of Array :\n");
    scanf("%d",&ser);
    ptr=a;
    for(i=0;i<n;i++)
    {
        if(ser==*ptr)
        {
        printf("%d founded at %d \n",*ptr,i);
        }
        ptr++;
    }
}
•	Access two-dimensional array using pointers.
#include<stdio.h>
int main()
{

    int a[20][20],i,n,j,*ptr;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    ptr=a;  
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",ptr);
            ptr++;
        }
    }
    ptr=a;                          //write down
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",*ptr);
            ptr++;
        }
        printf("\n");
    }
}
•	Add two matrix using pointers.
•	Multiply two matrix using pointers.
#include<stdio.h>
int main()
{
    int a[2][2]={1,2,3,4},b[2][2]={4,3,2,1},*p,*k,i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            p=(*(a+i)+j);                               //important
            k=(*(b+j)+i);
            printf("%d\t",*p * *k);
        }
        printf("\n");
    }
}
•	Find the length of the string using pointers.
#include<stdio.h>
int strl(char *);
int main()
{
    char name[20];
    int len;
    printf("Enter A String:\n");
    gets(name);                                     //important
    len=strl(name);
    printf("Entered String Length Is=%d",len);
}
int strl(char * s)
{
    int len1=0;
    while(*s!='\0')
    {
        len1++;
        s++;
    }
    return len1;
}
•	In short How to Copy one string to another using pointer.
#include<stdio.h>
int copy(char *,char *);
int main()
{
    char a[20],b[20];
    printf("Enter A String :\n");
    gets(a);
    copy(a,b);
    printf("%s",b);
}
int copy(char * a,char * b)
{
    while(*a!='\0')
    {                                       //important
        *b=*a;
        a++;
        b++;
    }
    *b='\0';
}
•	Concatenate two strings using pointers.
#include<stdio.h>
int con(char *,char *,char *); 
int main()
{
    char a[20],b[20],c[20];
    printf("Enter A String :\n");
    gets(a);
    printf("Enter 2nd String :\n");
    gets(b);
    con(a,b,c);
    printf("%s",c);
}
int con(char * a,char *b,char * c)
{
    while(*a!='\0')
    {
        *c=*a;
        c++;
        a++;                                    //important
    }
    while(*b!='\0')
    {
        *c=*b;
        c++;
        b++;
    }
    *c='\0';
}
•	Compare two strings using pointers.
#include<stdio.h>
int compare(char *,char *);
int main()
{
    int s=0;
    char a[20],b[20];
    printf("enter A String :\n");
    gets(a);
    printf("enter 2nd String :\n");
    gets(b);                                            
    s=compare(a,b);
    printf("compare difference: %d",s);
}
int compare(char * a,char * b)
{
    while(*a!='\0')
    {
        if(*a!=*b)
        {
            return *a-*b;
        }
        a++;
        b++;
    }
}
•	Find the reverse of a string using pointers.
#include<stdio.h>
int reverse(char *);
int main()
{
    char name[20];
    printf("Enter A String : \n");
    gets(name);
    reverse(name);
}
int reverse(char * name)
{
    int len=0,i=0;
    while(name[i]!='\0')
    {
        len++;
        i++;
    }                                               //important
    for(i=len;i>=0;i--)
    {
        printf("%c",name[i]);
    }
}
•	Sort String using pointers.
#include<stdio.h>
int reverse(char *);
int main()
{
    char name[20];
    printf("Enter A String : \n");
    gets(name);
    reverse(name);
    printf("%s",name);
}
int reverse(char * name)
{
    int i=0,j=0,len=0;                                          //important
    char temp;                  
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
}
•   sort array using pointer
#include<stdio.h>
int main()
{
    int n,arr[20],i,*ptr,j,temp=0;
    printf("Enter Size Of Array:\n");
    scanf("%d",&n);
    ptr=arr;
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);
    }                                                               //important
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(ptr+i)>*(ptr+j))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",*(ptr+i));
    }
}
•	Return multiple values from a function using pointers.