//Q1. Write a program to print total number of days in a month using switch case.
#include<stdio.h>
int main()
{
    int month;
    printf("Enter :-\n");
    
    printf("1\tFor January :-\n");
    printf("2\tFor Febraury :-\n");
    printf("3\tFor March :-\n");
    printf("4\tFor April :-\n");
    printf("5\tFor May :-\n");
    printf("6\tFor June :-\n");
    printf("7\tFor July :-\n");
    printf("8\tFor August :-\n");
    printf("9\tFor September :-\n");
    printf("10\tFor October :-\n");
    printf("11\tFor November :-\n");
    printf("12\tFor December :-\n\nEnter\n\n");
    scanf("%d",&month);
    switch(month)
    {
        case 1:
            printf("You Selected January : 31 Days");
            break;
        
        case 2:
            printf("You Selected February : 28 Days");
            break;
            
        case 3:
            printf("You Selected March : 31 Days");
            break;
            
        case 4:
            printf("You Selected April : 30 Days");
            break;
            
        case 5:
            printf("You Selected May : 31 Days");
            break;
            
        case 6:
            printf("You Selected June : 30 Days");
            break;
        
        case 7:
            printf("You Selected July : 31 Days");
            break;
            
        case 8:
            printf("You Selected August : 31 Days");
            break;
            
        case 9:
            printf("You Selected September : 30 Days");
            break;
            
        case 10:
            printf("You Selected October : 31 Days");
            break;
            
        case 11:
            printf("You Selected November : 30 Days");
            break;
            
        case 12:
            printf("You Selected December : 31 Days");
            break;
        default:
        printf("\nEnter Valid Choice");
    }    
}
//Write a program to find GCD of two Numbers Using for loop.
#include<stdio.h>
int main()
{
    int x,y,n1=0,n2=0;
    printf("Enter Two Number To Find GCD:\n");
    scanf("%d%d",&x,&y);
    n1=x;
    n2=y;
    while(x!=y)
    {
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    printf("GCD of Two Numbers %d %d Is =\t%d",n1,n2,x);
}


//q3. Write a program to find A Generic Root Of Number.
#include<stdio.h>
int main()
{
    int num,rem=0,rem1=0,sum=0,sum1=0;
    printf("Enter A Number To Find Generic Root :\n");
    scanf("%d",&num);
    while(num>0)
    {
        rem=num%10;
        sum=sum+rem;
        num=num/10;
    }
    if(sum>9)
    {
        while(sum>0)
        {
        rem1=sum%10;
        sum1=sum1+rem1;
        sum=sum/10;
        }
    }
    printf("Sum=%d",sum1);
}

//Write a program to find Number Is Armstrong Or Not
#include<stdio.h>
int main()
{
    int num,a=0,rem=0,sum=0;
    printf("Enter A Number To Find Armstrong Or Not :\n");
    scanf("%d",&num);
    a=num;
    while(num>0)
    {
        rem=num%10;
        sum=sum+(rem*rem*rem);
        num=num/10;
    }
    if(a==sum)
    {
        printf("Number Is Armstrong");
    }
    else
    {
        printf("Number Is Not A Armstrong");
    }
}

//Q5. Write a program to remove All Vowels From A String
#include<stdio.h>
int main()
{
    int i,j;
    char name[40];
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        if(name[i]=='a'||name[i]=='A'||name[i]=='e'||name[i]=='E'||name[i]=='i'||name[i]=='I'||name[i]=='o'||name[i]=='O'||name[i]=='u'||name[i]=='U')
        {
            for(j=i;name[j]!='\0';j++)
            { 
                name[j]=name[j+1];
            }
            i--;
        }
    }
    puts(name);
}

//Write a program to find roots of a quadratic equation using switch case.
#include<stdio.h>
int main()
{
    int a,b,c;
    printf("Enter Quadratic Equation Element : ( As ax2+2abx+b2 )\n");
    scanf("%d%d%d",&a,&b,&c);
    if(((b*b)-4*a*c)>0)
    {
        
    }
}
//Write a program to find LCM of two Numbers
#include<stdio.h>
int main()
{
    int x,y,n1=0,n2=0,lcm=0;
    printf("Enter Two Number To Find GCD:\n");
    scanf("%d%d",&x,&y);
    n1=x;
    n2=y;
    while(x!=y)
    {
        if(x>y)
            x=x-y;
        else
            y=y-x;
    }
    lcm=(n1*n2)/x;
    printf("Lcm of Two Numbers %d %d Is =\t%d",n1,n2,lcm);
}

//Q8. Write a program to print following pattern

#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",k++);
        }
        printf("\n");
    }
}

//  Q9 Write a program to print
#include<stdio.h>
int main()
{
    int i,j,k=0;
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    for(i=2;i>0;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}

/*  Q10. Write a program to draw Pascal's triangle
            1
           1 1
          1 2 1
         1 3 3 1
        1 4 6 4 1   */
 
#include<stdio.h>
int main()
{
    int row,coef=1,k=0,j,i;
    printf("Enter Number Of Rows : ");
    scanf("%d",&row);
    
    for(i=0;i<row;i++)
    {
        for(k=1;k<=row-i;k++)
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