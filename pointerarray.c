#include<stdio.h>
int main()
{
    int i;
    int a[20],(*b)[20],n;
    b=&a;

    printf("Enter How Many Element U Want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",*b+i);
    }
    for(i=0;i<n;i++)
    {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
        printf("\n%x ",(a+i));
        printf("\n%x ",(*b+i));
        printf("\n%d",*(*b+i));
    }
}

#include<stdio.h>
int fun(int (*a)[],int n);
int main()
{
    int i;
    int a[20],(*b)[20],n;
    b=&a;

    printf("Enter How Many Element U Want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",*b+i);
    }
}
int fun(int (*a)[],int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",**a+i);
    }
}

#include<stdio.h>
int sum(int a,int b)
{
    printf("Sum =%d",a+b);
}
int main()
{
    int (*ptr)(int,int)=sum;
    ptr(10,20);
}


#include<stdio.h>
int sum(int a,int b)
{
    printf("Sum =%d",a+b);
}
int sub(int a,int b)
{
    printf("Sum =%d",a-b);
}
int mult(int a,int b)
{
    printf("Sum =%d",a*b);
}
int div(int a,int b)
{
    printf("Sum =%d",a/b);
}
int main()
{
    int (*ptr[])(int,int)={sum,sub,mult,div};
    int ch;
    printf("Enter Your Choice :\n");
    scanf("%d",&ch);
    ptr[ch](10,20);
}


// Function Pointers Example
#include<stdio.h>
int swap(int *,int *);
int main()
{
    int m,n;
    printf("Enter Two Values :\n");
    scanf("%d%d",&m,&n);
    printf("Before Swap :\n");
    printf("first Value =%d Second Value = %d",m,n);
    swap(&m,&n);
    printf("After Swap :\n");
    printf("first Value =%d Second Value = %d",m,n);
}
int swap(int * a,int * b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
}


// Functions With Array Parameters
#include<stdio.h>
int print(int *[],int);
int main()
{
    int m[20],i,n,*mptr[20];
    *mptr=m;
    printf("Enter How Many Elements U Want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",mptr+i);
    }
    print(mptr,n);
}
int print(int * a[],int n)
{
    int i;   
    for(i=0;i<n;i++)
    {
        printf("%d",*a+i);
    }
}

#include<stdio.h>
int main()
{
    int x=0;
    if(x=1)
        printf("Enter");
    else if(x=10)
        printf("False");
    printf("%d",x);    
}

