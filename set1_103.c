#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter Two Numbers \n");
    scanf("%d%d",&a,&b);
    if(a>b){
    temp=a;
    b=a;
    a=b;
    }

    if(b%a==0){
        printf("multiply");
    }else{
        printf("not multiply");
    }
}