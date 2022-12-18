/*  * * * * * * * 
    * *       * * 
    *   *   *   * 
    *     *     * 
    *   *   *   * 
    * *       * * 
    * * * * * * *   */
   #include<stdio.h>
   int main()
   {
       int i,j;
       for(i=1;i<=7;i++)
       {
           for(j=1;j<=7;j++)
           {
               if(j==1||i==1||j==i||i==7||j==7+1-i||j==7)
               printf("* ");
               else
               printf("  ");
           }
           printf("\n");
       }
   }