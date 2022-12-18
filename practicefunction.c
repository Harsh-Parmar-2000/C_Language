•	Cube of any number using the function.
•	Find diameter, circumference and area of a circle using functions.
•	Maximum and minimum between two numbers using functions.
•	Check whether a number is even or odd using functions.
•	Check whether a number is prime, Armstrong or perfect number using functions.
#include<stdio.h>
int arms();
int main()
{
    int n;
    printf("Enter A No.:\n");
    scanf("%d",&n);
    arms(n);
}                                       // very very important
int arms(int val)
{
    int j=val,sum=0,rem;
    while(val>0)
    {
        rem=val%10;
        sum=sum+rem;
        val=val/10;
    }
    if(j==sum)
    {
        printf("Armstrong NUMBER\n");
    }
    else{
        printf("NOT A ARMSTRONG NUmber\n");
    }
}
int prime(int val)
{
    int i,j,flag=0;
    for(i=0;i<val;i++)
    {
        for(j=i+1;j<val;j++)
        {
            if(val%j!=0)
            {
                flag=1;
            }
        }
    }
    if(flag==0)
        {
            printf("It Is A  PRIME NUMBER %d\n",1);
        }
        else
        {
            printf("It is Not A Prime Number\nn");
        }
}
•	Find all prime numbers between the given interval using functions.              //important
#include<stdio.h>
int prime(int,int);
int main()
{
    int strt,end;
    printf("Enter The Starting Point:\n");
    scanf("%d",&strt);
    printf("Enter The Ending Point:\n");
    scanf("%d",&end);
    prime(strt,end);
}
int prime(int prime,int end)
{
    int i,flag=0,j,num=0;
    for(i=prime;i<=end;i++)
    {
        flag=0;
        num=i;
        for(j=2;j<num;j++)
        {
            if(num%j==0)
            flag=1;
        }
        if(flag==0)
        printf("%d ",i);
    }
}
•	Print all strong numbers between the given interval using functions.            //important
#include<stdio.h>
int strong(int,int);
int main()
{
    int strt,end;
    printf("Enter The Starting Point:\n");
    scanf("%d",&strt);
    printf("Enter The Ending Point:\n");
    scanf("%d",&end);
    strong(strt,end);
}
int strong(int strt,int end)
{
    int i,j,rem=0,num=0,fact=1,sum=0;
    for(i=strt;i<=end;i++)
    {
        num=i;
        sum=0;
        while(num>0)
        {
            fact=1;
            rem=num%10;
            for(j=1;j<=rem;j++)
            {
                fact=fact*j;
            }
            sum=sum+fact;
            num=num/10;
        }
        if(sum==i)
        {
            printf("%d ",i);
        }
    }
}
•	Armstrong numbers between the given interval using functions.                   //important
•	Print all perfect numbers between the given interval using functions.           //important
•	Find the power of any number using recursion.
    #include<stdio.h>
    int power(int,int);
    int main()
    {
        int s=0,val,p;
        printf("Enter Value:\n");
        scanf("%d",&val);                                               //important
        printf("Enter Power Value:\n");
        scanf("%d",&p);
        s=power(val,p);
        printf("-----%d",s);
    }
    int power(int val,int p)
    {
        if(p==0)
            return 1;
        else
        return val*power(val,p=p-1);
    }
•	Print all natural numbers between 1 to n using recursion.
#include<stdio.h>
int nature(int,int);
int main()
    {
        int val;
        printf("Enter A Value:\n");
        scanf("%d",&val);
        nature(val,1);
    }
    int nature(int end,int i)
    {
        if(end>=i)
        {
            printf("%d ",i);
        }
        nature(end,i+1);
    }
•	Print all even or odd numbers in a given range using recursion.
#include<stdio.h>
int even(int,int);
int odd(int,int);
int main()
{
    int num,a=0,b=0,i=1,num2;
    printf("Enter Starting NUmber:\n");
    scanf("%d",&num);
    printf("Enter Starting NUmber:\n");
    scanf("%d",&num2);
    even(num,num2);
    odd(num,num2);
}
int even(int strt,int end)
{
    if(end>=strt)
    {
        if(strt%2==0)
        {
            printf("%d ",strt);
        }
    }
    else
    {
        return 0;
    }
    even(strt+1,end);
}

int odd(int strt,int end)
{
    if(end>=strt)
    {
        if(strt%2!=0)
        {
            printf("%d ",strt);
        }
    }
    odd(strt+1,end);
}
•	Sum of all natural numbers between 1 to n using recursion.
#include<stdio.h>
int nature(int,int,int);
int main()
    {
        int s,val,sum=0;
        printf("Enter A Value:\n");
        scanf("%d",&val);
        s=nature(val,1,sum);
        printf("Enter =%d",s);
    }
    int nature(int end,int i,int sum)
    {                                           //important
        if(end>=i)
        {
            printf("%d ",i);
            sum=sum+i;
        }
        else
        {
            return sum;
        }
        nature(end,i+1,sum);
    }
•	Find the sum of all even or odd numbers in a given range using recursion.
#include<stdio.h>
int even(int,int,int);
int odd(int,int,int);
int main()
{
    int val1,val2,sum=0,so=0,se=0;
    printf("Enter Values:\n");
    scanf("%d",&val1);
    printf("Enter Values:\n");
    scanf("%d",&val2);
    se=even(val1,val2,sum);
    so=odd(val1,val2,sum);
    printf("Even= %d",se);
    printf("Odd =%d",so);
}
int even(int strt,int end,int sum)
{
    if(end>=strt)                                       //important
    {
        if(strt%2==0)
        {
            sum=sum+strt;
        }
    }
    else{
        return sum;
    }
    even(strt+1,end,sum);
}
int odd(int strt,int end,int sum)
{
    if(end>=strt)
    {
        if(strt%2!=0)
        {
            sum=sum+strt;
        }
    }
    else{
        return sum;
    }
    odd(strt+1,end,sum);
}
•	Find reverse of any number using recursion.
#include<stdio.h>
int rev(int,int,int);
int main()                                  
{
    int val,s=0,rem=0,sum=0;
    printf("Enter A Value To Find:\n");
    scanf("%d",&val);
    s=rev(val,sum,rem);
    printf("ENre=%d",s);
}
int rev(int a,int sum,int rem)
{
    if(a>0)
    {
        rem=a%10;
        sum=sum*10+rem;
    }
    else
    {
        return sum;
    }
    rev(a/10,sum,rem);
}
•	Check whether a number is a palindrome or not using recursion.
#include<stdio.h>
int pallin(int,int,int);
int main()                                                  //important
{
    int s=0,val,sum=0,r=0;
    printf("Enter A Number To Check=\n");
    scanf("%d",&val);
    s=pallin(val,sum,r);
    if(s==val)
    printf("No Is Pallindrome");
    else
    printf("Not A Pallindrome");
}
int pallin(int num,int sum,int rem)
{
    if(num>0)
    {
    rem=num%10;
    sum=sum*10+rem;
    }
    else
    {
        return sum;
    }
    pallin(num/10,sum,rem);
}
•	Find the sum of digits of a given number using recursion.
#include<stdio.h>
int digisum(int,int,int);
int main()
{
    int val,rem=0,sum=0,s;
    printf("Enter A Value\n");
    scanf("%d",&val);
    s=digisum(val,rem,sum);
    printf("Sum=%d",s);
}
int digisum(int val,int rem,int sum)
{
    if(val>0)
    {
        rem=val%10;
        sum=sum+rem;
    }
    else{
        return sum;
    }
    digisum(val/10,rem,sum);
}

    •	Find factorial of any number using recursion.
    #include<stdio.h>
    int fact(int,int);
    int main()
    {
        int val,s=0;
        printf("Enter A Value:\n");
        scanf("%d",&val);
        s=fact(val,1);
        printf("Num=%d",s);
    }
    int fact(int num,int y)                     //important
    {
        if(num>0)
        {
            y=num*y;
        }
        else
        {
            return y;
        }
        fact(num-1,y);
    }
•	Generate nth Fibonacci term using recursion.
#include<stdio.h>
int fib(int,int,int);
int main()
{
    int strt,strt2,term=0;
    printf("Enter Strt End Or Teerm");
    scanf("%d%d%d",&strt,&strt2,&term);
    fib(strt,strt2,term);               
}                                                       //important
int fib(int strt,int strt2,int term)
{
    int sum=0;
    if(term>0)
    {
        sum=strt+strt2;
        printf("%d ",strt);
    }
    fib(strt2,sum,term-1);
}
•	Find gcd (HCF) of two numbers using recursion.
#include<stdio.h>
int hcf(int,int);
int main()
{
    int x,y;
    printf("Enter X ANd Y :\n");
    scanf("%d%d",&x,&y);
    hcf(x,y);
}
int hcf(int x,int y)
{
    if(x>y)
    {
        x=x-y;
    }
    else{
        y=y-x;
    }                                               // important
    if(x==y)
    {
        printf("Factorial=%d",x);
        return 0;
    }
    hcf(x,y);
}
•	Find lcm of two numbers using recursion.
•	Display all array elements using recursion.
#include<stdio.h>
int array(int [],int,int);
int main()
{
    int arr[50],n,i;
    printf("Enter How Many Element U want :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    array(arr,n,0);
}
int array(int arr[],int n,int i)
{
    if(n>i)
    {
        printf("%d ",arr[i]);
    }
    array(arr,n,i+1);
}
•	Find the sum of elements of the array using recursion.
#include<stdio.h>
int array(int [],int,int,int);
int main()
{
    int arr[20],sum=0,n,s=0,i;
    printf("Enter How Many Elements U Want :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    s=array(arr,0,n,sum);
    printf("Sum=%d",s);
}                                                           //important
int array(int arr[],int i,int n,int sum)
{
    if(n>i)
    {
        sum=sum+arr[i];
    }
    else
    {
        return sum;
    }
    array(arr,i+1,n,sum);
}

•	Find maximum and minimum elements in an array using recursion.
#include<stdio.h>
int max(int [],int,int,int);
int min(int [],int,int,int);
int main()
{
    int i,m1=0,m2=0,val,arr[20],ma1=0,ma2=0;
    printf("Enter How Many Elements U Want:\n");
    scanf("%d",&val);
    for(i=0;i<val;i++)
    {
        scanf("%d",&arr[i]);
    }
    m1=max(arr,0,val,ma1);
    m2=min(arr,0,val,ma2=arr[0]);
    printf("\nMaximum=%d",m1);
    printf("\nMinimum=%d",m2);
}                                                                   //important
int max(int arr[],int i,int n,int ma1)
{
    if(n>i)
    {
        if(arr[i]>ma1)
        {
            ma1=arr[i];
        }
    }
    else
    {
        return ma1;
    }
    max(arr,i+1,n,ma1);
}
int min(int arr[],int i,int n,int ma2)
{
    if(n>i)
    {
        if(arr[i]<ma2)
        {
            ma2=arr[i];
        }
    }
    else
    {
        return ma2;
    }
    min(arr,i+1,n,ma2);
}

