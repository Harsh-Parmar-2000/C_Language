//Write a C program that accepts 7 integer values and count the even, odd, positive and negative values
#include<stdio.h>
int main()
{
    int i,a[7],even=0,odd=0,pos=0,neg=0;
    printf("Enter Several Values");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        if(a[i]>0)
        {
            pos+=1;
        }
        else{
            neg+=1;
        }
        if(a[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    printf("Positive Numbers=%d",pos);
    
    printf("Negative Numbers=%d",neg);
    
    printf("even Numbers=%d",even);
    
    printf("Odd Numbers=%d",odd);
    return 0;
}