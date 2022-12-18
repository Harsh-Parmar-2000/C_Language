//  •	Multiply two matrix using pointers.
#include<stdio.h>
int main()
{
    int *p,*k,i,j,a[2][2]={1,2,3,4},b[2][2]={4,3,2,1};

    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            p=(*(a+i)+j);
            k=(*(b+j)+i);
            printf("%d\t",*p * *k);
        }
        printf("\n");
    }
}