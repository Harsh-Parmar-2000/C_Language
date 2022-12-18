/*Write a C program to convert a currency value
(floating point with two decimal places) to possible number of notes and coins*/
#include<stdio.h>
#include<math.h>

int main()
{
    float value;
    int notes,coins,famt;
    printf("Enter Currency Value\n");
    scanf("%f",&value);
    
    famt=round(value*100);
    notes=value/100;
    value=value-(notes*100);
    printf("%d\n",notes);
    
    notes=value/50;
    value=value-(notes*50);
    printf("%d\n",notes);

    
    notes=value/20;
    value=value-(notes*20);
    printf("%d\n",notes);    

    notes=value/10;
    value=value-(notes*10);
    printf("%d\n",notes);
    
    notes=value/5;
    value=value-(notes*5);
    printf("%d\n",notes);

    
    notes=value/2;
    value=value-(notes*2);
    printf("%d\n",notes);

    
    notes=value/1;
    value=value-(notes*1);
    printf("%d\n",notes);

    coins=famt/0.50;
    famt=famt-(coins*0.50);
    printf("%.2f\n",coins);

    coins=value/0.20;
    value=value-(coins*0.20);
    printf("%.2f\n",coins);

    coins=value/0.10;
    value=value-(coins*0.10);
    printf("%f\n",coins);

    coins=value/0.5;
    value=value-(coins*0.5);
    printf("%f\n",coins);

    coins=value/0.2;
    value=value-(coins*0.2);
    printf("%f\n",coins);

    coins=value/0.1;
    value=value-(coins*0.1);
    printf("%f\n",coins);
return 0;
}