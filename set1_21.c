#include<stdio.h>
int main()
{
    int num;
    printf("Enter A Number\n");
    scanf("%d",&num);

    if(num>=0 && num<=20)
    {
        printf("Number is %d Range Is [0-20]\n",num);
    }
    else if(num>20 && num<=40)
    {
    printf("Number is %d Range Is [20-40]\n",num);        
    }
    else if(num>40 && num<=60)
    {
    printf("Number is %d Range Is [40-60]\n",num);        
    }
    else if(num>60 && num<=80)
    {
    printf("Number is %d Range Is [60-80]\n",num);        
    }
    else{
        printf("Wrong Number");
    }
    return 0;
}