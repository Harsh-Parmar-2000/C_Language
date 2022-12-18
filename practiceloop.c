8. Write a program in C to display the n terms of odd natural number and their 
sum . 
Test Data
Input number of terms : 10
Expected Output :
The odd numbers are :1 3 5 7 9 11 13 15 17 19
The Sum of odd Natural Number upto 10 terms : 100
#include<stdio.h>
int main()
{
    int terms,sum=0,i;
    printf("Enter number of terms:\n");
    scanf("%d",&terms);
    for(i=1;terms>0;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            terms--;
        }
    }
}
9. Write a program in C to display the pattern like right angle triangle using an 
asterisk. 
The pattern like : *
**
***
**** 
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter How Many Row U Want\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}
10. Write a program in C to display the pattern like right angle triangle with a 
number. 
The pattern like :
1
12
123
1234
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Enter How Many Row U Want\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
12. Write a program in C to make such a pattern like right angle triangle with 
number increased by 1. 
The pattern like :
 1
 2 3
 4 5 6
 7 8 9 10
13. Write a program in C to make such a pattern like a pyramid with numbers 
increased by 1. 
     1 
    2 3 
   4 5 6 
  7 8 9 10 
  #include<stdio.h>
  int main()
  {
      int i,j,k,l=1,n;
      printf("Enter How Many Row :\n");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=n-i;j++)
          {
              printf(" ");
          }
          for(k=1;k<=i;k++)
          {
              printf("%d ",l);
              l++;
          }
          printf("\n");
      }
  }
14. Write a program in C to make such a pattern like a pyramid with an 
asterisk. 
 * 
 * * 
 * * * 
* * * *
#include<stdio.h>
int main()
{
    int i,j,n,k;
    printf("Enter How Many Row :\n");
      scanf("%d",&n);
      for(i=1;i<=n;i++)
      {
          for(j=1;j<=n-i;j++)
          {
              printf(" ");
          }
          for(j=1;j<=i;j++)
          {
              printf("* ");
          }
      printf("\n");
      }
}
15. Write a C program to calculate the factorial of a given number. 
Test Data :
Input the number : 5
Expected Output :
The Factorial of 5 is: 120
#include<stdio.h>
int main()
{
    int num,fact=1,i;
    printf("Enter How Many Row :\n");
      scanf("%d",&num);
      for(i=1;i<=num;i++)
      {
          fact=fact*i;
      }
      printf("Factorial=%d",fact);
}

// 18. Write a program in C to find the sum of the series [ 1-X^2/2!+X^4/4!- 
// .........]. 
// Test Data :
// Input the Value of x :2
// Input the number of terms : 5
// Expected Output :
// the sum = -0.415873
// Number of terms = 5
// value of x = 2.000000
19. Write a program in C to display the n terms of harmonic series and their 
sum. 
1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms
Test Data :
Input the number of terms : 5
Expected Output :
1/1 + 1/2 + 1/3 + 1/4 + 1/5 +
Sum of Series upto 5 terms : 2.283334
#include<stdio.h>
int main()
{
    int terms,i;
    float s=0,sum=0;
    printf("Enter How Many Row :\n");
      scanf("%d",&terms);
      for(i=1;i<=terms;i++)
      {
          s=1.0/i;
          sum=sum+s;
      }
      printf("Entrer:%f",sum);
}
20. Write a program in C to display the pattern like a pyramid using asterisk 
and each row contain an odd number of asterisks. 
   *
  ***
 *****
 #include<stdio.h>
 int main()
 {
     int i,j,n;
     printf("Enter How Many Row:\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=n-i;j++)
         {
             printf(" ");
         }
         for(j=1;j<i*2;j++)             //very important
         {
             printf("*");
         }
         printf("\n");
     }
 }
21. Write a program in C to display the sum of the series [ 9 + 99 + 999 + 
9999 ...]. 
Test Data :
Input the number or terms :5
Expected Output :
9 99 999 9999 99999
The sum of the saries = 111105
#include<stdio.h>
int main()
{
    int i,n=5,sum=0,sum1=0;
    for(i=1;i<=n;i++)
    {                           // very important
        sum=sum*10+9;
        sum1+=sum;
        printf("%d ",sum);
    }
    printf("\nThe Sum Of The Series:%d",sum1);
}
22. Write a program in C to print the Floyds Triangle. 
1 
01
101 
0101 
10101
#include<stdio.h>
int main()
{
    int i,j,n;
    printf("Input Size Of Triangle:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                if(j%2!=0)
                printf("1");        //very important
                else
                printf("0");
            }
            else
            {
                if(j%2==0)
                printf("1");
                else
                printf("0");
            }
        }
        printf("\n");
    }
}
23. Write a program in C to display the sum of the series [ 
1+x+x^2/2!+x^3/3!+....]. 
Test Data :
Input the value of x :3
Input number of terms : 5
Expected Output :
The sum is : 16.375000
#include<stdio.h>
#include<math.h>
int main()
{
    int val,term,i;
    float fact=1,add=1,sum=0,power=0;
    printf("Enter A Value:\n");
    scanf("%d",&val);
    printf("Enter Term:\n");
    scanf("%d",&term);
    for(i=1;i<term;i++)                 // very important
    {
        power=pow(val,i);
        fact=fact*i;
        sum=(float)power/fact;
        add=add+sum;
    }
    printf("--------%f",add);
}
// 24. Write a program in C to find the sum of the series [ x - x^3 + x^5 + ......]. 
// Test Data :
// Input the value of x :2
// Input number of terms : 5
// Expected Output :
// The values of the series:
// 2
// -8
// 32
// -128
// 512
// The sum = 410                    //important
// #include<stdio.h>
// int main()
// {
//     int val,i,term;
//     printf("Input The Value Of X:\n");
//     scanf("%d",&val);
//     printf("Input Number Of Terms:\n");
//     scanf("%d",&term);
//     for(i=1;term>0;i+=2)
//     {
//         power=pow(val,i);   
//         sum=sum+power;
//     }
// }
25. Write a program in C to display the n terms of square natural number and 
their sum. 
1 4 9 16 ... n Terms
Test Data :
Input the number of terms : 5
Expected Output :
The square natural upto 5 terms are :1 4 9 16 25
The Sum of Square Natural Number upto 5 terms = 55
#include<stdio.h>
int main()
{
    int i,n,sum=0,add=0;
    printf("input Number Of Terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=i*i;
        add=add+sum;
        printf("%d ",sum);
    }
    printf("\nSum=%d",add);
}
26. Write a program in C to find the sum of the series 1 +11 + 111 + 1111 + .. 
n terms. 
Test Data :
Input the number of terms : 5
Expected Output :
1 + 11 + 111 + 1111 + 11111
The Sum is : 12345
#include<stdio.h>
int main()
{
    int i,n,sum=0,add=0;
    printf("Enter How Many Terms:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        sum=sum*10+1;
        printf("%d ",sum);
        add=add+sum;
    }
    printf("\nSum=%d",add);
}
27. Write a c program to check whether a given number is a perfect number or 
not. 
Test Data :
Input the number : 56
Expected Output :
The positive divisor : 1 2 4 7 8 14 28
The sum of the divisor is : 64
So, the number is not perfect.
#include<stdio.h>
int main()
{
    int val,i,j,sum=0,str=0;
    printf("Enter The Number:\n");
    scanf("%d",&val);
    str=val;
    for(i=1;i<=val/2;i++)               //very very important
    {
        if(val%i==0)
        {
            sum=sum+i;
        }
    }
    if(str==sum)
    {
        printf("Number Is Perfect\n");
    }
    else{
        printf("Not A Perfect");
    }
}
28. Write a c program to find the perfect numbers within a given number of 
range. 
Test Data :
Input the starting range or number : 1
Input the ending range of number : 50
Expected Output :
The Perfect numbers within the given range : 6 28
#include<stdio.h>
int main()
{
    int strt,sum=0,end,i,j,num=0;
    printf("Enter Starting Point:\n");
    scanf("%d",&strt);
    printf("Enter Ending Point:\n");
    scanf("%d",&end);
    for(i=strt;i<=end;i++)
    {
        num=i;
        sum=0;
        for(j=1;j<num;j++)
        {
            if(num%j==0)
            {                       //very important
                sum=sum+j;
            }
        }
        if(sum==i)
        printf("%d ",i);
    }
}
29. Write a C program to check whether a given number is an armstrong 
number or not. 
Test Data :
Input a number: 153
Expected Output :
153 is an Armstrong number.
#include<stdio.h>
int main()
{
    int val,rem=0,sum=0,i;
    printf("Enter A VAlue:\n");
    scanf("%d",&val);
    i=val;
    while(val>0)
    {
        rem=val%10;
        sum=sum+(rem*rem*rem);
        val=val/10;
    }
    if(sum==i)
    printf("Number Is Armstrong\n");
    else
    printf("Not A Armstrong\n");
}
30. Write a C program to find the Armstrong number for a given range of 
number. 
Test Data :
Input starting number of range: 1
Input ending number of range : 1000
Expected Output :
Armstrong numbers in given range are: 1 153 370 371 407
#include<stdio.h>
int main()
{
    int strt,end,i,num=0,sum=0,rem=0;
    printf("Enter A Starting Value:\n");
    scanf("%d",&strt);
    
    printf("Enter A Ending Value:\n");
    scanf("%d",&end);
    printf("Armstrong Number In A Given Range=");
    for(i=strt;i<=end;i++)
    {
        num=i;
        sum=0;
        while(num>0)
        {
            rem=num%10;
            sum=sum+(rem*rem*rem);
            num=num/10;
        }
        if(i==sum)
        printf("%d ",i);
    }
}
31. Write a program in C to display the pattern like a diamond. 
    *
   *** 
  *****
 *******
********* 
 *******
  *****
   ***
    *
    * 
    #include<stdio.h>
    int main()
    {
        int i,j,sp=0,n;
        printf("Enter A Size:\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(sp=1;sp<=n-i;sp++)
            {
                printf(" ");
            }
            for(j=1;j<i*2;j++)
            {
                printf("*");
            }                               //very very important
            printf("\n");
        }
        for(i=n-1;i>=1;i--)
        {
            for(sp=1;sp<=n-i;sp++)
            {
                printf(" ");
            }
            for(j=1;j<i*2;j++)
            {
                printf("*");
            }
            printf("\n");
        }
    } 
32. Write a C program to determine whether a given number is prime or not. 
 Test Data :
Input a number: 13
Expected Output :
13 is a prime number.

#include<stdio.h>
int main()
{
    int val,i,j,flag=0;
    printf("Enter A Value:\n");
    scanf("%d",&val);
        for(j=2;j<val;j++)
        {
            if(val%j==0)
            {
                flag=1;
            }
        }                       //very very important
        if(flag==0)
        printf("Number Is Prime");
        else
        printf("Not A Prime");
}
33. Write a C program to display Pascals triangle. 
 Test Data :
Input number of rows: 5
Expected Output :
 1
 1 1 
 1 2 1 
 1 3 3 1
1 4 6 4 1 
#include<stdio.h>
int main()
{
    int i,j,n,coef=1,sp=0;
    printf("Enter How Many Row U Want :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
            {
                coef=1;
            }
            else
            coef=coef*(i-j+1)/j;
            printf("%d ",coef);
        }
        printf("\n");
    }
}
34. Write a program in C to find the prime numbers within a range of 
numbers. 
Test Data :
Input starting number of range: 1
Input ending number of range : 50
Expected Output :
The prime number between 1 and 50 are :
2 3 5 7 11 13 17 19 23 29 31 37 41 43 47
#include<stdio.h>
int main()
{
    int strt,end,i,j,flag=0,num=0;
    printf("Enter Starting Point:\n");
    scanf("%d",&strt);
    printf("Enter Ending Point:\n");
    scanf("%d",&end);
    for(i=strt+1;i<end;i++)
    {
        num=i;
        flag=0;
        for(j=2;j<num;j++)
        {
            if(num%j==0)
            {
                flag=1;             //very very important
            }
        }
        if(flag==0)
        {
            printf("%d ",i);
        }
    }
}
35. Write a program in C to display the first n terms of Fibonacci series. 
Fibonacci series 0 1 2 3 5 8 13 .....
Test Data :
Input number of terms to display : 10
Expected Output :
Here is the Fibonacci series upto to 10 terms :
0 1 1 2 3 5 8 13 21 34
#include<stdio.h>
int main()
{
    int i,val1,val2,term,sum=0;
    printf("Enter Value 1:\n");
    scanf("%d",&val1);
    printf("Enter Value 2:\n");
    scanf("%d",&val2);
    printf("Enter How Many Terms U Want:\n");
    scanf("%d",&term);
    for(i=1;i<=term;i++)
    {                               //very very important
        sum=val1+val2;
        printf("%d ",val1);
        val1=val2;
        val2=sum;
    }
}
36. Write a program in C to display the such a pattern for n number of rows 
using a number which will start with the number 1 and the first and a last 
number of each row will be 1. 
  1
 121
12321
#include<stdio.h>
int main()
{
    int i,j,n,sp,k;
    printf("Enter How Many Rows U Want:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf("  ");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d ",j);
        }
        j--;
        for(k=j-1;k>0;k--)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
37. Write a program in C to display the number in reverse order. 
Test Data :
Input a number: 12345
Expected Output :
The number in reverse order is : 54321
#include<stdio.h>
int main()
{
    int sum=0,rem=0,val,i;
    printf("Enter A Value:\n");
    scanf("%d",&val);
    while(val>0)
    {
        rem=val%10;
        sum=sum*10+rem;             // very very important
        val=val/10;
    }
    printf("Reverse=%d",sum);
}

38. Write a program in C to check whether a number is a palindrome or not. 
Test Data :
Input a number: 121
Expected Output :
121 is a palindrome number.
#include<stdio.h>
int main()
{
    int pal=0,rem=0,sum=0,val,i;
    printf("Enter A Value:\n");
    scanf("%d",&val);
    pal=val;
    while(val>0)
    {
        rem=val%10;
        sum=sum*10+rem;
        val=val/10;
    }
    if(pal==sum)
    {
        printf("Number Is Pallindrome");
    }
    else
    {
        printf("Not A Pallindrome");
    }
}
39. Write a program in C to find the number and sum of all integer between 
100 and 200 which are divisible by 9. 
Expected Output :
Numbers between 100 and 200, divisible by 9 :
108 117 126 135 144 153 162 171 180 189 198
The sum : 1683
40. Write a C Program to display the pattern like pyramid using the alphabet. 
 A
 A B A 
 A B C B A
 A B C D C B A 
 #include<stdio.h>
 int main()
 {
     int i,j,n,k;
     printf("Enter How Many Row U Want:\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
         for(j=1;j<=i;j++)
         {
             printf("%c ",j+64);
         }
         j--;
         for(k=j-1;k>0;k--)
         {
             printf("%c ",k+64);
         }
         printf("\n");
     }
 }
41. Write a program in C to convert a decimal number into binary without 
using an array. 
Test Data :
Input a decimal number: 25
Binary number equivalent to said decimal number is: 
0000000000000000000000000001 1001
#include<stdio.h>
int main()
{
    int count=1,val,i,sum=0,rem=0;
    printf("Enter A Decimal Number :\n");
    scanf("%d",&val);                       //very very important
    while(val>0)
    {
        rem=val%2;
        val=val/2;
        sum=sum+(rem*count);
        count=count*10;
    }
    printf("-----%d",sum);
}
42. Write a program in C to convert a binary number into a decimal number 
without using array, function and while loop. 
Test Data :
Input a binary number :1010101
Expected Output :
The Binary Number : 1010101
The equivalent Decimal Number : 85
#include<stdio.h>
#include<math.h>
int main()
{
    int val,i,rem=0,base=1,sum=0;
    printf("Enter A Binary Number:\n");
    scanf("%d",&val);
    for(i=0;val>0;i++)
    {
        rem=val%10;                         //very very important
        sum=sum+(rem*base);
        val=val/10;
        base=base*2;
    }
    printf("-----%d",sum);
}

43. Write a C program to find HCF (Highest Common Factor) of two numbers. 
Test Data :
Input 1st number for HCF: 24
Input 2nd number for HCF: 28
Expected Output :
HCF of 24 and 28 is : 4
#include<stdio.h>
int main()
{
    int x,y,b=0,a=0;
    printf("Enter Two Values:\n");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(x!=y)
    {                               //very very important
        if(x>y)
        x=x-y;
        else
        y=y-x;
    }
    printf("Hcf Of %d And %d is : %d",a,b,y);
}
44. Write a program in C to find LCM of any two numbers using HCF. 
Test Data :
Input 1st number for LCM: 15
Input 2nd number for LCM: 20
Expected Output :
The LCM of 15 and 20 is : 60
#include<stdio.h>
int main()
{
    int x,y,a,b,lcm;
    printf("Enter Two Values:\n");
    scanf("%d%d",&x,&y);
    a=x;
    b=y;
    while(x!=y)
    {                           //very very important
        if(x>y)
        x=x-y;
        else
        y=y-x;
    }
    lcm=(a*b)/x;
    printf("\nLCM=%d",lcm);
}
46. Write a program in C to convert a binary number into a decimal number 
using math function. 
Test Data :
Input the binary number :1010100
Expected Output :
The Binary Number : 1010100
The equivalent Decimal Number is : 84
#include<stdio.h>
#include<math.h>
int main()
{
     int num,i,rem=0,sum=0;
     printf("Enter A Value:\n");
     scanf("%d",&num);                  // important
     for(i=0;num>0;i++)
     {
         rem=num%10;
         sum=sum+(rem*pow(2,i));
         num=num/10;
     }
     printf("The Decimal Number Is: %d",sum);
}
47. Write a C program to check whether a number is a Strong Number or not. 
Test Data :
Input a number to check whether it is Strong number: 15
Expected Output :
15 is not a Strong number.
#include<stdio.h>
int main()
{
    int val,add=0,i,sum=0,fact=1,rem=0;
    printf("Enter A Number:\n");
    scanf("%d",&val);
    add=val;
    while(val>0)
    {
        fact=1;
        rem=val%10;
        for(i=1;i<=rem;i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        val=val/10;
    }
    if(sum==add)
    printf("%d is a strong Number",add);
    else
    printf("%d is Not A Strong Number",add);
}
48. Write a C program to find Strong Numbers within a range of numbers. 
Test Data :
Input starting range of number : 1
Input ending range of number: 200
Expected Output :
The Strong numbers are :
1 2 145
#include<stdio.h>
int main()
{
    int strt,end,i,fact=1,num=0,j,rem=0,sum=0;
    printf("Enter Starting Point:\n");
    scanf("%d",&strt);
    printf("Enter Ending Point:\n");
    scanf("%d",&end);
    printf("The strong Numbers Are:\n");
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
49. Write a c program to find out the sum of an A.P. series. 
Test Data :
Input the starting number of the A.P. series: 1
Input the number of items for the A.P. series: 10
Input the common difference of A.P. series: 4
Expected Output :
The Sum of the A.P. series are :
1 + 5 + 9 + 13 + 17 + 21 + 25 + 29 + 33 + 37 = 190
#include<stdio.h>
int main()
{
    int i,strt,term,diff,sum=0;
    printf("Enter The Starting Number:\n");
    scanf("%d",&strt);
    printf("Enter The number Of Terms:\n");
    scanf("%d",&term);
    printf("Enter The Common Difference:\n");
    scanf("%d",&diff);
    for(i=strt;term>0;i=i+diff)             //important
    {
        printf("%d+",i);
        sum=sum+i;
        term--;
    }
    printf("SUm=%d",sum);
}
50. Write a program in C to convert a decimal number into octal without using 
an array. 
Test Data :
Enter a number to convert : 79
Expected Output :
The Octal of 79 is 117.
#include<stdio.h>
int main()
{
    int val,rem=0,sum=0,count=1;
    printf("Enter A Value:\n");
    scanf("%d",&val);
    for(int i=0;val>0;i++)
    {
        rem=val%8;
        sum=sum+(rem*count);
        val=val/8;
        count=count*10;
    }
    printf("Octal=%d",sum);
}
51. Write a program in C to convert an octal number to a decimal without 
using an array. 
Test Data :
Input an octal number (using digit 0 - 7) :745
Expected Output :
The Octal Number : 745
The equivalent Decimal Number : 485
#include<stdio.h>
#include<math.h>
int main()
{
    int val,i,rem=0,sum=0;
    printf("Enter Octal Number:\n");\
    scanf("%d",&val);
    for(i=0;val>0;i++)
    {
        rem=val%10;
        sum=sum+(rem*pow(rem,i));
        val=val/10;
    }
    printf("Decimal=%d",sum);
}
52. Write a program in c to find the Sum of GP series. 
Test Data :
Input the first number of the G.P. series: 3
Input the number or terms in the G.P. series: 5
Input the common ratio of G.P. series: 2
Expected Output :
The numbers for the G.P. series:
3.000000 6.000000 12.000000 24.000000 48.000000
The Sum of the G.P. series : 93.000000
#include<stdio.h>
int main()
{
    float fir=3,term=5,com=2,i,sum=0;
    for(i=fir;term>0;i*=com)
    {
        printf("%f",i);
        sum=sum+i;
        term--;
    }
    printf("\nSum=%f",sum);
}
53. Write a program in C to convert a binary number to octal. 
Test Data :
Input a binary number :1001
Expected Output :
The Binary Number : 1001
The equivalent Octal Number : 11
54. Write a program in C to convert an octal number into binary. 
Test Data :
Input an octal number (using digit 0 - 7) :57
Expected Output :
The Octal Number : 57
The equivalent Binary Number : 101111
55. Write a program in C to convert a decimal number to hexadecimal. 
Test Data :
Input any Decimal number: 79
Expected Output :
The equivalent Hexadecimal Number : 4F
56. Write a program in C to Check Whether a Number can be Express as Sum 
of Two Prime Numbers. 
Test Data :
Input a positive integer: 16
Expected Output :
16 = 3 + 13
16 = 5 + 11
#include<stdio.h>
int main()
{
    int i,j,val;
    printf("Enter A Value:\n");
    scanf("%d",&val);
    for(i=1;i<val;i++)
    {
        for(j=1;j<val;j++)
        {                       //important
            if(j+i==val)
            {
                printf("%d = %d + %d\n",val,i,j);
            }
        }
    }
}
57. Write a program in C to print a string in reverse order. 
Test Data :
Input a string to reverse : Welcome
Expected Output :
Reversed string is: emocleW
#include<stdio.h>
int main()
{
    char name[20];
    int i,len=0;
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        len++;
    }                       //important
    for(i=len;i>=0;i--)
    {
        printf("%c",name[i]);
    }
}
58. Write a C program to find the length of a string without using the library 
function. 
Test Data :
Input a string : welcome
Expected Output :
The string contains 7 number of characters.
So, the length of the string welcome is : 7
// 59. Write a program in C to check Armstrong number of n digits. 
// Test Data :
// Input an integer : 1634
// Expected Output :
// 1634 is an Armstrong number
// #include<stdio.h>
// #include<math.h>
// int main()
// {
//     int val,i,rem=0,sum=0,x=0,str=0,n=3;
//     printf("Enter A Value:\n");
//     scanf("%d",&val);
//     str=val;
//     for(i=0;val>0;i++)
//     {
//         rem=val%10;
//         x=pow(rem,n);
//         sum=sum+x;
//         val=val/10;
//     }
//     if(str==sum)
//     printf("Armstrong Number");
//     else
//     printf("Not ");
// }