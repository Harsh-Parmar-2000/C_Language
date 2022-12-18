/*  3
    44
    555
    6666
    555
    44
    3   */
    #include<stdio.h>
    int main()
    {
        int i,j,k=3;
        for(i=1;i<=4;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d",k);
            }
            k=k+1;
            printf("\n");
        }
       k=k-1;
        for(i=3;i>0;i--)
        {
              k=k-1;
            for(j=1;j<=i;j++)
            {
                printf("%d",k);
            }
           
            printf("\n");
        }
    }