// LCM Of Two Numbers By While Loop
#include<stdio.h>
int main()
{
    int val1,lcm=0,val2;
    printf("Enter A Value And Enter A Second Value");
    scanf("%d%d",&val1,&val2);
    if(val1>val2)
    {
        lcm=val1;
    }
    else{
        lcm=val2;
    }
    while(1)
    {
        if(lcm%val1==0 && lcm%val2==0)
        {
            printf("Lcm=%d",lcm);\
            break;
        }
        else
        lcm++;
    } 
}