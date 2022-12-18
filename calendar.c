#include<stdio.h>
void main()
{
    int days,start,i;
    printf("Enter How Many Days In Month");
    scanf("%d",&days);

    printf("\nEnter Starting Day (0-mon/1-tue....6-sun)\n");
    scanf("%d",&start);
    
        if(start>=0 && start<=6)
        {
            printf("Inputed Number is Valid\n");
        }
        else
        {
            printf("Number is InValid");
        }

    printf("mon\ttue\twed\tthur\tfri\tsat\tsun\n");
    printf("..................................\n\n");
    for(i=start;i!=0;i--)
    {
        printf("\t");
    }

    for(i=1;i<=days;i++)
    {
        printf("%d\t",i);
        if((start+i)%7==0)
        {
            printf("\n");
        }       
    }    
}