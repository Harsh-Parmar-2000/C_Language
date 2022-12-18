// Write a Java program to find heights of the top three building in descending order from eight given buildings
#include<stdio.h>
int main()
{
    int i,hgt[4 ],j,temp;
    printf("Enter Building Heights\n");
    for(i=0;i<4;i++)
    {
        scanf("%d",&hgt[i]);
    }
    for(i=0;i<4;i++)
    {
        for(j=i+1;j<4;j++)
        {
            if(hgt[i]<hgt[j])
            {
                temp=hgt[i];
                hgt[i]=hgt[j];
                hgt[j]=temp;
            }
        }
    }
    for(j=0;j<3;j++)
    {
        printf("%d ",hgt[j]);
    }
}