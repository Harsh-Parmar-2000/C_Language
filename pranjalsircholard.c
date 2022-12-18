#include<stdio.h>
int iter(int);
int main()
{
    int pos=0,count[100],i,how=0,max=0,num=0;
    //printf("Enter A Value :\n");
    //scanf("%d",&val);
    for(i=1;i<=100;i++)
    {
        num=i;
        how=iter(num);
        count[i]=how;
        if(how>max)
        {
            max=how;
            pos=i;
        }
    }
     for(i=1;i<=100;i++)
     {
     printf("%d-----%d\n",i,count[i]);
     }
 printf("\nPosition %d     Maximum=%d",pos,max);
}

int iter(int num)
{
    int c=0;
            while(num!=1)
            {
            if(num%2==0)
            {
                num=num/2;
                c++;
            }
            else
            {
                num=3*num+1;
                c++;
            }
            }
            return c;
 }
 