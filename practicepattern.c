/////                           pattern
#include<stdio.h>
int main()
{
    int i,j;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(j==1||j==i||i==5)
            {
                printf("%d ",j);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
/*          1
          2 3 2
        3 4 5 4 3
      4 5 6 7 6 5 4
    5 6 7 8 9 8 7 6 5       */
    #include<stdio.h>
    int main()
    {
        int i,j,k,n,sp=0;
        printf("Enter How Many Row U Want :\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(sp=1;sp<=n-i;sp++)
            {
                printf("  ");
            }
            k=i;
            for(j=1;j<=i;j++)
            {
                printf("%d ",k++);
            }
            k=k-2;
            for(j=1;j<i;j++)
            {
                printf("%d ",k--);
            }
            printf("\n");
        }
    }
/*          1
           1 2
          1   3
         1     4 
        1 2 3 4 5   */  
    #include<stdio.h>
    int main()
    {
        int n,i,j,sp=0;
        printf("Enter How Many Row U Want :\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(sp=1;sp<=n-i;sp++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                if(j==1||j==i||i==5)
                printf("%d ",j);
                else
                printf("  ");
            }
            printf("\n");
        }
    }
/*    1 2 3 4 5
      2     5
      3   5
      4 5
      5            */
      #include<stdio.h>
      int main()
      {
          int j,i;
          for(i=1;i<=5;i++)
          {
              for(j=i;j<=5;j++)
              {
                  if(j==i||j==5||i==1)
                  {
                      printf("%d ",j);
                  }
                  else{
                      printf("  ");
                  }
              }
              printf("\n");
          }
      }  
/*  1
    1 2 1
    1 2 3 2 1 
    1 2 3 4 3 2 1 
    1 2 3 4 5 4 3 2 1   */
#include<stdio.h>
int main()
{
    int i,j,n,k=0;
    printf("Enter How Many Row U Want :\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        k=1;
        for(j=1;j<=i;j++)
        {
            printf("%d ",k++);
        }
        k=k-2;
        for(j=1;j<i;j++)
        {
            printf("%d ",k--);
        }
        printf("\n");
    }
}
/*  A
    A B A
    A B C B A
    A B C D C B A
    A B C D E D C B A   */
    #include<stdio.h>
    int main()
    {
        int i,j,n;
    printf("Enter Row:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        for(j=i-1;j>0;j--)
        {
            printf("%c ",j+64);
        }
        printf("\n");
    }
}
// star wale
#include<stdio.h>
int main()
{
    int i,j,sp,n;
    printf("Enter Row:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=9-i;sp++)
        {
            printf("*");
        }
        for(j=1;j<=i;j++)
        {
            printf("%d*",i);
        }
        for(sp=1;sp<=8-i;sp++)
        {
            printf("*");
        }
        printf("\n");
    }
}

/*
            1
          1 2 1
        1 2 3 2 1 
      1 2 3 4 3 2 1
    1 2 3 4 5 4 3 2 1 */
    #include<stdio.h>
    int main()
    {
        int i,j,sp,n;
        printf("Enter Row:\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(sp=1;sp<=n-i;sp++)
            {
                printf("  ");
            }
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            for(j=i-1;j>0;j--)
            {
                printf("%d ",j);
            }
            printf("\n");
        }
}

/*      3
        44
        555
        6666
        555
        44
        3       */
        #include<stdio.h>
        int main()
        {
            int i,j,n=4;
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",i+2);
                }
                printf("\n");
            }
            for(i=n-1;i>0;i--)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",i+2);
                }
                printf("\n");
            }
        }
    
/*      1
        2*2
        3*3*3
        4*4*4*4
        4*4*4*4
        3*3*3
        2*2
        1           */
    #include<stdio.h>
    int main()
    {
        int i,j,n=4;
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                if(i==j)
                printf("%d",i);
                else
                printf("%d*",i);
            }
            printf("\n");
        }
        for(i=n;i>0;i--)
        {
            for(j=1;j<=i;j++)
            {
                if(i==j)
                printf("%d",i);
                else
                printf("%d*",i);
            }
            printf("\n");
        }
    }
/*      1
        2*3
        4*5*6
        7*8*9*10
        7*8*9*10
        4*5*6
        2*3
        1   */
        #include<stdio.h>
        int main()
        {
            int i,j,n,k;
            printf("Enter Row:\n");
            scanf("%d",&n);
            k=1;
            for(i=1;i<=n;i++)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",k++);
                }
            printf("\n");
            }
            k--;
            for(i=4;i>=1;i--)
            {
                for(j=1;j<=i;j++)
                {
                    printf("%d",k--);
                }
                printf("\n");
            }
        }
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
               if(i==1||i==7||j==i||j==1||j==7||j==7-i+1)
               printf("* ");
               else
                printf("  ");
           }
           printf("\n");
       }
   }

/*        * * * * * * * 
         *           * 
        *           * 
       *           * 
      *           * 
     *           * 
    * * * * * * *   */
   #include<stdio.h>
   int main()
   {
       int i,j,sp=0;
       for(i=1;i<=7;i++)
       {
           for(sp=1;sp<=7-i;sp++)
           {
               printf(" ");
           }
           for(j=1;j<=7;j++)
           {
               if(j==1||i==1||i==7||j==7)
               printf("* ");
               else
               printf("  ");
           }
       printf("\n");
       }
   }
/*    * * * * * * *
        * * * * * *
          * * * * *
            * * * *
              * * *
                * *
                  *     */
                 #include<stdio.h>
                 int main()
                 {
                     int i,j,k;
                     for(i=1;i<=7;i++)
                     {
                         for(k=1;k<i;k++)
                         {
                             printf("  ");
                         }
                         for(j=i;j<=7;j++)
                         {
                             printf("* ");
                         }
                         printf("\n");
                     }
                 }
/*     * * * * * * * 
        * * * * * *
         * * * * *
          * * * * 
           * * *
            * *
             *      */
            #include<stdio.h>
            int main()
            {
                int i,j,k;
                for(i=7;i>=1;i--)
                {
                    for(k=1;k<=7-i;k++)
                    {
                        printf(" ");
                    }
                    for(j=i;j>0;j--)
                    {
                        if(j==i||i==7||j==1)
                        printf("* ");
                        else
                        printf("  ");
                    }
                    printf("\n");
                }
            }    

//    diamond star pattern
#include<stdio.h>
int main()
{
    int i,j,n=4,sp=0;
    for(i=1;i<=n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf("  ");
        }
        for(j=1;j<i*2;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    for(i=n-1;i>=1;i--)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf("  ");
        }
        for(j=1;j<i*2;j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
/*    *       *
       *     *
        *   *
         * *
          * 
         * *
        *   *
       *     *
      *       *             */
     #include<stdio.h>
    int main()
    {
        int i,j,n;
        printf("How many row u want:\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=n;j++)
            {
                if(j==i||j==10-i)
                {
                    printf("*");
                }
                else{
                    printf(" ");
                }
            }
            printf("\n");
        }
    }
/*      1
       1 2
      1   3
     1     4
    1 2 3 4 5 */
    #include<stdio.h>
    int main()
    {
        int i,j,sp=0,n;
        printf("enter How Many Row U Want\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(sp=1;sp<=n-i;sp++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                if(j==i||j==1||i==5)
                printf("%d ",j);
                else
                printf("  ");
            }
            printf("\n");
        }
    }
/*  1
    1 2 1
    1 2 3 2 1 
    1 2 3 4 3 2 1 
    1 2 3 4 5 4 3 2 1   */
    #include<stdio.h>
    int main()
    {
        int i,j,k,n;
        printf("Enter Size :\n");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ",j);
            }
            j--;
            for(k=j-1;k>0;k--)
            {
                printf("%d ",k);    // very important
            }
            printf("\n");
        }
    }
// pascal triangle
#include<stdio.h>
int main()
{
    int i,j,coef=1,sp,n;
    printf("Enter How Many Row U Want :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(sp=1;sp<=n-i;sp++)
        {
            printf(" ");
        }                                               // very important 
        for(j=0;j<=i;j++)
        {
            if(j==0||i==0)
            coef=1;
            else
            coef=coef*(i-j+1)/j;
            printf("%d ",coef);
        }
        printf("\n");
    }
}
/*  A
    A B A
    A B C B A
    A B C D C B A 
    A B C D E D C B A   */
    #include<stdio.h>
    int main()
    {
        int i,j,k,n;
    printf("Enter Size:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",j+64);
        }
        j--;
        for(k=j-1;k>0;k--)
        {
            printf("%c ",k+64);         //very important
        }
        printf("\n");
    }
    }
    //half diamond star
    //inverted pyramid
    #include<stdio.h>
    int main()
    {
        int i,j,n,sp;
        printf("Enter Size:\n");
        scanf("%d",&n);
        for(i=n;i>0;i--)
        {
            for(sp=1;sp<=n-i;sp++)
            {
                printf(" ");
            }
            for(j=1;j<=i;j++)
            {
                printf("* ");
            }
            printf("\n");
        }
    }