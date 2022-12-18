/*      * * * * * * *
         *         * 
          *       *
           *     *
            *   *
             * *
              *    */
    #include<stdio.h>
    int main()
    {
        int i,j,k;
        for(i=7;i>0;i--)
        {
            for(k=1;k<=7-i;k++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                if(j==1||i==7||j==i)
                printf("* ");
                else{
                    printf("  ");
                }
            }
            printf("\n");
        }
    }