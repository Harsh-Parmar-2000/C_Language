// Write a C program which reads an integer (7 digits or fewer) and count number of 3s in the given number. 
#include<stdio.h>
void main()
{
    int i=0,num,no;
    printf("Enter A Number");
    scanf("%d",&num);

    while(num!=0)
    {
        no=num%10;
        if(no==3){
            i=i+1;
        }
        num=num/10;
    }
    printf("%d",i);
}