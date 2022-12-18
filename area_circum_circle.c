#include<stdio.h>
int main()
{
    int rad;
    float pi=3.14,area,circum;
    
    printf("Enter a Radius To Calculate Area & Circumpherence Of A Circle\n");
    scanf("%d",&rad);

    area=pi*(rad*rad);
    printf("The Area Of Circle Is:%f\n",area);

    circum=2*pi*rad;
    printf("The Circumpherence Of Circle Is:%f\n",circum);

    printf("Thanks");

    return 0;

}