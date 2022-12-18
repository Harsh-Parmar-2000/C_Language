//  •	Add two matrix using pointers.
#include<stdio.h>
int main()
{
    int i,j,a[20][20],row,column,*apnt,b[20][20],*bpnt,c[20][20],*cpnt;
    printf("Enter Row Size U Want :\n");
    scanf("%d%d",&row,&column);
    apnt=a;
    printf("Enter Elements Of Array 1 :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",apnt);
            apnt++;
        }
    } 
       bpnt=b;
    printf("Enter Elements Of Array 1 :\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            scanf("%d",bpnt);
            bpnt++;
        }
    }
    apnt=a;
    bpnt=b;
    cpnt=c;
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            *cpnt=*bpnt+*apnt;
            cpnt++;
            bpnt++;
            apnt++;
        }
    }
        apnt=a;
        bpnt=b;
        cpnt=c;   
    printf("\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<column;j++)
        {
            printf("%d\t",*cpnt);
            cpnt++;
        }
    }
}