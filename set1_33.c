#include<stdio.h>
void main()
{
    int num,a[20],i,j,c=0,count=0;
    printf("How Many Numbers U Want To Enter\n");
    scanf("%d",&count);
    printf("Enter %d Integers\n",count);
    for(i=0;i<count;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<count;i++)
    {
        printf("%d\n",a[i]);
    }
    for(j=0;j<count;j++)
    {
        if(a[j]>c)
        {
            c=a[j];
            num=j;
        }
    }
    printf("Highest=%d\tPosition=%d",c,num+1);
}