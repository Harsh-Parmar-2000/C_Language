/* Write a C Program to display the pattern like pyramid using the alphabet. 
       A
     A B A 
   A B C B A
 A B C D C B A          */
 #include<stdio.h>
 int main()
 {
     int i,j;
     for(i=1;i<=4;i++)
     {
         for(j=1;j<=4-i;j++)
         {
             printf("  ");
         }
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

    /*      A
          A B A
        A B C B A */
        #include<stdio.h>
        int main()
        {
            int i,j,n,sp=0,k;
            printf("Enter Size:\n");
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
                for(sp=1;sp<=n-i;sp++)
                printf("  ");
                for(j=1;j<=i;j++)
                    printf("%c ",j+64);
                for(k=i-1;k>0;k--)
                printf("%c ",k+64);
                printf("\n");
            }
        }
