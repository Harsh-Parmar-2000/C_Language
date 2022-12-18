//•	Find the power of any number using recursion.
#include<stdio.h>
int power(int,int);
int main()
{
    int val,p,s=0;
    printf("Enter Value:\n");
    scanf("%d",&val);
    printf("Enter power of Value:\n");
    scanf("%d",&p);
    s=power(val,p);                                 //important
    printf("%d the Power Of %d\t=\t%d",val,p,s);
}
int power(int val,int p)
{
    if(p==0)
    return 1;
    else
    return val*power(val,p-1);
}

//•	Print all even or odd numbers in a given range using recursion.
#include<stdio.h>
int even(int,int);
int odd(int,int);
int main()
{
    int strt,end;
    printf("Enter Value:\n");
    scanf("%d",&strt);
    printf("Enter power of Value:\n");
    scanf("%d",&end);
    even(strt,end);
    odd(strt,end);
}
int even(int strt,int end)
{
    if(strt<=end)
    {
        if(strt%2==0)
        printf("%d ",strt);
    }
    else
    return 0;
    even(strt+1,end);
}
int odd(int strt,int end)
{
    if(strt<=end)
    {
        if(strt%2!=0)
        printf("%d ",strt);
    }
    else
        return 0;
    odd(strt+1,end);
}

•	Find reverse of any number using recursion.
#include<stdio.h>
int reverse(int,int,int);
int main()
{
    int val,rev;
    printf("Enter A Number:\n");
    scanf("%d",&val);
    rev=reverse(val,0,0);
    printf("Reverse=%d",rev);
}
int reverse(int val,int rem,int sum)
{
    if(val>0)
    {
        rem=val%10;
        sum=sum*10+rem;
    }
    else
    return sum;
    reverse(val/10,rem,sum);
}

•	Find factorial of any number using recursion.
    #include<stdio.h>
    int fact(int,int);
    int main()
    {
        int num,s;
        printf("Enter A Number:\n");
        scanf("%d",&num);
        s=fact(num,1);
        printf("---------%d",s);
    }
    int fact(int num,int sum)
    {
        if(num>0)
        sum=sum*num;
        else
        return sum;
        fact(num-1,sum);
    }
•	Generate nth Fibonacci term using recursion.
#include<stdio.h>
int fib(int,int,int);
int main()
{
    int strt,strt1,term;
    printf("Enter 1st Element");
    scanf("%d",&strt);
    printf("Enter 2nd Element");
    scanf("%d",&strt1);
    printf("Enter how many Element");
    scanf("%d",&term);
    fib(strt,strt1,term);
}
int fib(int one,int two,int term)
{
    int sum=0;
    if(term>0)
    {
        sum=one+two;
        printf("%d ",one);
    }
    fib(two,sum,term-1);
}

•	Find gcd (HCF) of two numbers using recursion.
#include<stdio.h>
int hcf(int,int);
int main()
{
    int s=0,x,y,a=0,b=0,lcm=0;
    printf("Enter A Number:\n");
    scanf("%d",&x);
    printf("Enter 2nd Number:\n");
    scanf("%d",&y);
    s=hcf(x,y);
    lcm=x*y/s;
    printf("lcm=%d",lcm);
}
int hcf(int x,int y)
{
    if(x>y)
    x=x-y;
    else
    y=y-x;
    if(x==y)
    {
        return x;
    }
    hcf(x,y);
}

•	Find the sum of elements of the array using recursion.
#include<stdio.h>
int sumele(int [],int,int,int);
int main()
{
    int arr[20],n,sum,i;
    printf("Size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    sum=sumele(arr,n,0,0);
    printf("--------%d",sum);
}
int sumele(int arr[],int n,int i,int sum)
{
    if(n>i)
        sum=sum+arr[i];
    else
        return sum;
    sumele(arr,n,i+1,sum);
}

•	Find maximum and minimum elements in an array using recursion.
#include<stdio.h>
int max(int [],int,int,int);
int min(int [],int,int,int);
int main()
{
    int addm=0,addmi=0,arr[20],n,i;
    printf("Size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    addm=max(arr,n,0,0);
    addmi=min(arr,n,0,arr[0]);
    printf("\nMaximum=%d",addm);
    printf("\nMinimum=%d",addmi);
}
int max(int arr[],int n,int i,int m)
{
    if(n>i)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    else
    return m;
    max(arr,n,i+1,m);
}
int min(int arr[],int n,int i,int m)
{
    if(n>i)
    {
        if(arr[i]<m)
        {
            m=arr[i];
        }
    }
    else
    return m;
    min(arr,n,i+1,m);
}