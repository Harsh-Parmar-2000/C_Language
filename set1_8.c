#include<stdio.h>
int main()
{
    int days,years,weaks;
    printf("Enter Number Of Days\n");
    scanf("%d",&days);

    years=days/365;
    printf("Years=%d\n",years);

    weaks=(days-(years*365))/7;
    printf("weaks =%d\n",weaks);

    days=days-(years*365)-(weaks*7);
    printf("days =%d\n",days);

    printf("COME AGAIN THANK YOU");
    return 0;

}