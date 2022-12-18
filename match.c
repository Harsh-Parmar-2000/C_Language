#include<stdio.h>
int main()
{
    int i,sum=0;
    while(sum!=20)
    {
        printf("Enter No. Of Matchsticks\n");
        scanf("%d",&i);
        while(i>4||i<1)
        {
            printf("invalid");
            break;
        }
        while(i>=1&&i<=4)
        {
            printf("cpu Matchstick=%d\n",5-i);
            sum=sum+5;
            printf("Left MatchSticks=%d\n",21-sum);
            break;
        }
    }
    printf("you lost 1 ms is left");
}