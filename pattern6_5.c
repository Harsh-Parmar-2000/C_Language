/*            +
              +
              +
              +
              +
              +
        +++++++++++++
              +
              +
              +
              +
              +
              +             */
    #include<stdio.h>
    int main()
    {
        int i,j;
        for(i=1;i<=13;i++)
        {
            for(j=1;j<=13;j++)
            {
                if(j==7||i==7)
                {
                    printf("+ ");
                }
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
    }