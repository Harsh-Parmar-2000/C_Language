/*34. Write a C program to compute the sum of consecutive odd numbers from a given pair of integers. 
Test Data :
Input a pair of numbers (for example 10,2):
Input first number of the pair: 10
Input second number of the pair: 2
Expected Output:
List of odd numbers: 3
5
7
9
Sum=24
*/
#include<stdio.h>
int main()
{
    int a,b,i,sum=0;
    printf("Enter A First Number:\n");
    scanf("%d",&a);
    printf("Enter A Second Number:\n");
    scanf("%d",&b);
    if(a<b)
    {
        return 0;
    }
    for(i=b;i<=a;i++)
    {
        if((i%2)!=0)
        {
            printf("%d ",i);
            sum=sum+i;
        }
    }
    printf("\nSum=%d",sum);
}

/*49. Write a C program to read and print the elements of an array of length 7, before print, put the triple of the previous position starting from the second position of the array. 
For example, if the first number is 2, the array numbers must be 2, 6, 18, 54 and 162
Test Data:
Input the first number of the array: 5
Expected Output:
n[0] = 5
n[1] = 15
n[2] = 45
n[3] = 135
n[4] = 405
*/
#include<stdio.h>
int main()
{
    int x,i,num[5];
    printf("Enter First ELement :\n");
    scanf("%d",&x);
    for(i=0;i<5;i++)
    {
        num[i]=x;
        x=x*3;
    }
    for(i=0;i<5;i++)
    {
        printf("n[%d]=%d ",i,num[i]);
    }
}

/*51. Write a C program to read an array of length 6, change the first element by the last, the second element by the fifth and the third element by the fourth. Print the elements of the modified array. 
Test Data:
Input the 5 members of the array:
15
20
25
30
35

Expected Output:
array_n[0] = 35
array_n[1] = 30
array_n[2] = 25
array_n[3] = 20
array_n[4] = 15 */
#include<stdio.h>
int main()
{
    int num[8],i,temp;
    int n=7;
    for(i=0;i<n;i++)
    {
        scanf("%d",&num[i]);
    }
    for(i=0;i<n/2;i++)
    {
        temp=num[i];
        num[i]=num[n-i-1];
        num[n-i-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",num[i]);
    }
}


/*58. Write a C program that accepts 4 real numbers from the keyboard and print out the difference of the maximum and minimum values of these four numbers. 
Input four numbers: 1.54 1.236 1.3625 1.002
Difference is 0.5380    */
#include<stdio.h>
int main()
{
    int i;
    float num[4],max=0,min=0,diff=0;
    for(i=1;i<=4;i++)
    {
        scanf("%f",&num[i]);
    }
    min=num[0];
    for(i=1;i<=4;i++)
    {
        if(num[i]>max)
        max=num[i];
        if(num[i]<min)
        min=num[i];
    }
    diff=max-min;
    printf("Difference = %f",diff);
} 


/*  63. Write a C program that accepts a positive integer n less than 100 from the user and prints out the sum 14 + 24 + 44 + 74 + 114 + • • • + m4 , where m is less than or equal to n. Print appropriate message. 
Input a positive number less than 100: 68
Sum of the series is 37361622   */
#include<stdio.h>
int main()
{
    int n,sum=0,i,j=1;
    printf("Enter A Positive Integer Less Than 100 :\n");
    scanf("%d",&n);
    for(i=1;j<=n;i++)
    {
        printf("%d ",j);
        sum=sum+(j*j*j*j);
        j+=i;
    }
    printf("\n\nSum=%d",sum);
}


//Q.Pascal Trisngle
#include<stdio.h>
int main()
{
    int row,i,j,k,coef=1;
    printf("Enter How Many U Want :\n");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(k=1;k<row-i;k++)
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
            {
                coef=coef*(i-j+1)/j;
            }
            printf("%d ",coef);
        }
        printf("\n");
    }
}
#include<stdio.h>
int main()
{
    int row,j,i,k=0,coef=1;
    printf("Enter How Many U Want :\n");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(k=1;k<row-i;k++)
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
            {
                coef=coef*(i-j+1)/j;
            }
            printf("%d ",coef);
        }
    printf("\n");
    }
}


#include<stdio.h>
int main()
{
    int row,i,j,k,coef=1;
    
    printf("Enter How Many U Want :\n");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(k=1;k<row-i;k++)
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
            {
                coef=coef*(i-j+1)/j;
            }
            printf("%d ",coef);
        }
        printf("\n");
    }
}

/*  65. Write a C program that prints out the prime numbers between 1 and 200. The output should be such that each row contains a maximum of 20 prime numbers. 
Expected output:
The prime numbers between 1 and 199 are:
2 3 5 7 11 13 17 19 23 29
31 37 41 43 47 53 59 61 67 71
73 79 83 89 97 101 103 107 109 113
127 131 137 139 149 151 157 163 167 173
179 181 191 193 197         */
#include<stdio.h>
int main()
{
    int i,j,a,b,count=0,num=0,ip=0;
    printf("Enter Starting Point Or Ending Point :\n");
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        count=1;
        for(j=2;j<=i/2;j++)
        {
            if(i%j==0)
            {
                count=0;
            }
        }
        if(count==1)
        {
            printf("%d ",i);
            ip++;
            if(ip%10==0)
            {
                printf("\n");
            }
        }
    }
    printf("\n");
}

/*  92. Write a C program to find the last non-zero digit of the factorial of a given positive integer. 
For example for 5!, the output will be "2" because 5! = 120, and 2 is the last nonzero digit of 120
Sample Output:
Input a positive number:
The last non-zero digit of the said factorial:
0
    */
   #include<stdio.h>
   int main()
   {
       long long int i,sum=0,last=0,fact=1,num;
        printf("Enter A Value To Find Factorial :\n");
        scanf("%lld",&num);
        for(i=1;i<=num;i++)
        {
            fact=fact*i;
        }
        printf("Factorial=%lld",fact);
        while(fact%10==0)
        {
            fact=fact/10;
        }
        sum=fact%10;
        printf("\n%d",sum);
   }
/*96. Write a C program to count blanks, tabs, and newlines in an input text. 
Sample Output:
Number of blanks, tabs, and newlines:
Input few words/tab/newlines
The quick
brown fox jumps
over the lazy dog
^Z
blank=7,tab=2,newline=3 */
#include<stdio.h>
int main()
{
    int blank=0,tabs=0,newl=0;
    char *point,str[200];
    printf("Enter A String :(To Stop Press $) :\n");
    scanf("%[^$]s",&str);
    point=str;
    while(*point!='\0')
    {
        if(*point==' ')
        {
            blank++;
        }
        if(*point=='\t')
        {
            tabs++;
        }
        if(*point=='\n')
        {
            newl++;
        }
        *point++;
    }
    printf("\nBlanks %d Tabs %d newl %d",blank,tabs,newl);
}
// Write a C program which accepts some text from the user and prints each word of that text in separate line.
#include<stdio.h>
int main()
{
     char *s,tex[200];
     int word,count;
     printf("Enter a Sentence\n");
     scanf("%[^#]s",&tex);
     s=tex;
    while(*s!='\0')
    {
        if(*s==' '||*s=='\t'||*s=='\n')
        {
            *s='\n';
        }   
        *s++;
    }
    printf("%s",tex);
}

//  Pascal Triangle
#include<stdio.h>
int main()
{
    int row,i,j,k=0,coef=1;
    printf("Enter Row :\n");
    scanf("%d",&row);
    for(i=0;i<row;i++)
    {
        for(k=1;k<row-i;k++)
        {
            printf(" ");
        }
        for(j=0;j<=i;j++)
        {
            if(i==0||j==0)
            {
                coef=1;
            }
            else{
                coef=coef*(i-j+1)/j;
            }
            printf("%d ",coef);
        }
        printf("\n");
    }
}

/*  99. Write a C program that takes some integer values from the user and print a histogram. 
Sample Output:
Input number of histogram bar (Maximum 10):
4
Input the values between 0 and 10 (separated by space):
9
7
4
3       */
#include<stdio.h>
int main()
{
    int num,i,j,name[20];
    printf("Input Number Of Histogram Bar :\n");
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        scanf("%d",&name[i]);
    }
    
    for(i=0;i<num;i++)
    {
        for(j=0;j<name[i];j++)
        {
        printf("#");
        }
        printf("\n");
    }
}
// consecutive odd and even upto 10 elements
#include<stdio.h>
int main()
{
    int num=15,i,j=1;
    for(i=num;j<=10;i++)
    {
        if(i%2==0)
        {
        printf("%d ",i);
        j++;
        }
    }
    printf("odd");
    j=1;
    for(i=num;j<=10;i++)
    {
        if(i%2!=0)
        {
            printf("%d ",i);
            j++;
        }
    }
}

//122. Write a C program that reads two integers m, n and compute the sum of n even numbers starting from m. 
#include<stdio.h>
int main()
{
    int m,n,sum=0,j=1,i;
    printf("Enter Two Integers :\n");
    scanf("%d%d",&m,&n);
    for(i=m;j<=n;i++)
    {
        if(i%2==0)
        {
            sum=sum+i;
            j++;
        }
    }
    printf("Sum=%d",sum);
}  

//cube of any value
#include<stdio.h>
int cube(int);
int main()
{
    int num,a;
    printf("Enter A Value:\n");
    scanf("%d",&num);
    a=cube(num);
    printf("Cube Of Number=%d",a);
}
int cube(int co)
{
    return co*co*co;
}
//check wheather A Number Is Prime , Armstrong Or Perfect Number
#include<stdio.h>
int prime(int);
int armstrong(int);
int perfect(int);
int main()
{
    int num;
    printf("Enter A Value:\n");
    scanf("%d",&num);
    prime(num);
    armstrong(num);
    perfect(num);
}
int prime(int val)
{
    int i,j,count=1;
        for(j=2;j<val;j++)
        {
            if(val%j==0)
            {
                count=0;
            }
        }
    if(count==1)
        {
            printf("IT IS A PRIME NO\n");
        }
        else
        {
            printf("Not A PRIME No\n");
        }
 }
int armstrong(int val)
{
    int n=0,i,rem=0,sum=0;
    n=val;
    while(val>0)
    {
        rem=val%10;
        sum=sum+(rem*rem*rem);
        val=val/10;
    }
    if(sum==n)
    {
        printf("Number Is Armstrong\n");
    }
    else
    {
        printf("Not A Armstrong\n");
    }
}
int perfect(int val){
    int n=0,j,sum=0;
    n=val;
        for(j=1;j<val;j++)
        {
            if(val%j==0)
            {
                sum=sum+j;
            }
        }
        if(sum==n)
        {
            printf("number is perfect");
        }
        else
        {
            printf("Not A Perfect");
        }
}
//strong number
#include<stdio.h>
int strong(int);
int main()
{
    int val,i,rem=0,fact=1,sum=0,n=0;
    printf("Enter A Val\n");
    scanf("%d",&val);
    n=val;
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
    if(n==sum)
    {
        printf("Strong number\n");
    }
    else{
        printf("not a strng number");
    }
}