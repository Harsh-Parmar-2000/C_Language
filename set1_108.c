// Write a C program that reads two integer values and calculate the sum of all odd and values between them
#include<stdio.h>
int main()
{
    int i,x,y,odd=0,even=0;
    printf("Enter Starting Value\n");
    scanf("%d",&x);
    printf("Enter End Value\n");
    scanf("%d",&y);
    for(i=x+1;i<y;i++)
    {
        if(i%2==0){
            printf("%d\t",i);
            even=even+i;;
        }
        else{
            printf("%d\t",i);
            odd=odd+i;
        }
    }
    printf("Even Value Sum=%d\n",even);
    
    printf("odd Value Sum=%d\n",odd);

}