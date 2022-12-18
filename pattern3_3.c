/*  *
    * 1 *
    * 1 2 1 *
    * 1 2 3 2 1 *
    * 1 2 1 *
    * 1 *
    *               */
   #include<stdio.h>
   int main()
   {
       int i,j,k;
       for(i=1;i<=3;i++)
       {
           if(i==1)
           {
               printf("*\n");
           }
           for(j=1;j<=i;j++)
           {
               if(j==1)
                {
                    printf("* ");
                }
                    printf("%d ",j);
           }
           j=j-2;
           for(k=j;k>0;k--)
           {
               printf("%d ",k);
           }
           if(i>0)
           {
               printf("*");
           }
           printf("\n");
       }
       for(i=2;i>0;i--)
       {
           for(j=1;j<=i;j++)
           {
               if(j==1)
           {
               printf("* ");
           }
               printf("%d ",j);
           }
           j=j-2;
           for(k=j;k>0;k--)
           {
               printf("%d ",k);
           }
           if(i>0)
           {
               printf("*");
           }
           if(i==1)
           {
               printf("\n*");
           }

           printf("\n");
       }
   }
