#include<stdio.h>
void main()
{
    int notes,amt;
    printf("Enter How Many Rupees");
    scanf("%d",&amt);
    notes=(amt/100);
    printf("100 rs Notes are :-%d\n",notes);
    amt=amt-(notes*100);
    notes=amt/50;
    printf("50 rs Notes are :-%d\n",notes);
    amt=amt-(notes*50);
    notes=amt/20;
    printf("20 rs Notes are :-%d\n",notes);
    amt=amt-(notes*20);
    notes=amt/10;
    printf("10 rs Notes are :-%d\n",notes);
    amt=amt-(notes*10);
    notes=amt/5;
    printf("5 rs Notes are :-%d",notes);
    amt=amt-(notes*5);
    notes=amt/2;
    printf("2 rs Notes are :-%d",notes);
    amt=amt-(notes*2);
    notes=amt/1;
    printf("1 rs Notes are :-%d",notes);
    amt=amt-(notes*1);
}