/*  
                1
              2 3 2
            3 4 5 4 3
          4 5 6 7 6 5 4
        5 6 7 8 9 8 7 6 5   */



#include<stdio.h>
void main(){
    int i,j,k=1;
    for(i=1;i<=5;i++){
        for(j=1;j<=5-i;j++){
            printf("  ");
        }
        k=i;
        for(j=1;j<=i;j++){
            printf("%d ",k++);
        }
        k=k-2;
        for(j=1;j<=i-1;j++){
            printf("%d ",k--);
        }        
        printf("\n");
    }
}

// #include<stdio.h>
// int main()
// {
//     int i,j,k=1,sp;
//     for(i=1;i<=5;i++)
//     {
//         for(sp=1;sp<=5-i;sp++)
//         {
//             printf("  ");
//         }
//         k=i;
//         for(j=1;j<=i;j++)
//         {
//             printf("%d ",k++);
//         }
//         k=k-2;
//         for(j=i-1;j>=1;j--)
//         {
//             printf("%d ",k--);
//         }
//         printf("\n");
//     }
// }

