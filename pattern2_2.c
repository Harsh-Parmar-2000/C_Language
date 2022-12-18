/*  A
    A   B   A
    A   B   C   B   A
    A   B   C   D   C   B   A
    A   B   C   D   E   D   C   B   A   */
    #include<stdio.h>
    int main()
    {
        int i;
        int j;
        for(i=1;i<=5;i++)
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