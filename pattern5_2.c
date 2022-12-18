/*                  *
                  * *
                *   *
              *     *   
            *       * 
          *         *   
        * * * * * * *   */
       #include<stdio.h>
       int main()
       {
           int i,j,k;
           for(i=1;i<=7;i++)
           {
               for(k=1;k<=7-i;k++)
               {
                   printf("  ");
               }
               for(j=1;j<=i;j++)
               {
                   if(j==i||j==1||i==7)
                   printf("* ");
                   else
                   printf("  ");
               }
                printf("\n");
           }
       }