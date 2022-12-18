•	Add two matrices.
#include<stdio.h>
int main()
    {
        int arr[3][3],b[3][3],a[3][3],i,j,x,y;
        printf("Input How Many Row & Column U Want :\n");
        scanf("%d",&x);
        printf("Input How Many Row & Column U Want :\n");
        scanf("%d",&y);
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                arr[i][j]=a[i][j]+b[i][j];
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
}
•	Subtract two matrices.
#include<stdio.h>
int main()
{
        int arr[3][3],b[3][3],a[3][3],i,j,x,y;
        printf("Input How Many Row & Column U Want :\n");
        scanf("%d",&x);
        printf("Input How Many Row & Column U Want :\n");
        scanf("%d",&y);
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d",&a[i][j]);
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                scanf("%d",&b[i][j]);
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                arr[i][j]=a[i][j]-b[i][j];
            }
        }
        for(i=0;i<x;i++)
        {
            for(j=0;j<y;j++)
            {
                printf("%d\t",arr[i][j]);
            }
            printf("\n");
        }
}
•	Perform scalar matrix multiplication.
•	Multiply two matrices.
#include<stdio.h>
int main()
{
    int arr[5][5],a[5][5],b[5][5],sum=0,i,j,k,n;
    printf("Enter Row & Column :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }                                   //important
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum=0;
            for(k=0;k<n;k++)
            {
                arr[i][j]=a[i][k]*b[k][j];
                sum=sum+arr[i][j];
            }
            printf("%d\t",sum);
        }
        printf("\n");
    }
}
•	Check whether two matrices are equal or not.
#include<stdio.h>
int main()
{
    int n,a[5][5],b[5][5],j,i,count=0;
    printf("Enter Row & Column :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(a[i][j]!=b[i][j])
            {
                count++;
            }
        }
    }
    if(count==0)
    {
    printf("Same");
    }
    else
    {
        printf("not Same");
    }
}
•	Sum of the main diagonal elements of a matrix.
#include<stdio.h>
int main()
{
    int arr[5][5],i,j,n,sum=0;
    printf("Enter HOw Many Element U Want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }                                           
    }                                           //important
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n-1-j)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("Sum = %d",sum);
}
•	Find the sum of minor diagonal elements of a matrix.
#include<stdio.h>
int main()
{
    int arr[5][5],i,j,n,sum=0;
    printf("Enter HOw Many Element U Want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)                        //important
        {
            scanf("%d",&arr[i][j]);
        }
    }                                                   
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n-j-1)
            {
                sum=sum+arr[i][j];
            }
        }
    }
    printf("Sum = %d",sum);
}
•	Find the sum of each row and column of a matrix.
#include<stdio.h>
int main()
{
    int arr[5][5],n,i,j,sum=0,colsum=0;
    printf("Enter Size Of Array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<n;i++)
    {
        sum=0;
        colsum=0;
        for(j=0;j<n;j++)
        {
            sum=sum+arr[i][j];
            colsum=colsum+arr[j][i];
        }
        printf("Sum=%d",sum);
        printf("ColSum=%d",colsum);
    }
}
•	Interchange diagonals of a matrix.
#include<stdio.h>
int main()
{
    int j,arr[5][5],n,i,temp=0;
    printf("Enter Row & Column :\n");
    scanf("%d",&n);                             //  important
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                temp=arr[i][n-i-1];
                arr[i][n-1-i]=arr[i][j];
                arr[i][j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

•	The upper triangular matrix.
#include<stdio.h>
int main()
{
    int arr[5][5],i,j,n;
    printf("Enter Row And Column:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)                                    //important
        {
            scanf("%d",&arr[i][j]);
        }
    }
    
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j)
            {
            printf("%d ",arr[i][j]);
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
•	Find a lower triangular matrix.
#include<stdio.h>
int main()
{
    int arr[5][5],i,j,n;
    printf("Enter Size Of Triangle :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)                                
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            printf("%d ",arr[i][j]);
        else{
            printf("  ");
        }
        }
        printf("\n");
    }
}
•	Sum of the upper triangular matrix.
#include<stdio.h>
int main()
{
    int arr[5][5],i,j,n,sum=0;
    printf("Enter Size oF Matrix:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {                                       // important
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i<=j){
                sum=sum+arr[i][j];
            printf("%d ",arr[i][j]);
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("Sum=%d",sum);
}
•	Find the sum of a lower triangular matrix.
#include<stdio.h>
int main()
{
    int arr[5][5],i,j,n,sum=0;
    printf("Enter Size Of Matrix\n");
    scanf("%d",&n);                                     //  important
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i>=j)
            {
                sum=sum+arr[i][j];
                printf("%d ",arr[i][j]);
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("Sum=%d",sum);
}
•	The transpose of a matrix.
#include<stdio.h>
int main()
{
    int arr[5][5],i,j,n;
    printf("Enter Size Of Matrix:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
        printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
•	Find determinant of a matrix.
•	Identity matrix in C.
#include<stdio.h>
int main()
{
    int a[5][5],i,j,n;
    printf("Enter Size Of Matrix:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                a[i][j]=1;
            }
            else                                //      important
            {
               a[i][j]=0;
            }
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
•	Check the sparse matrix.
#include<stdio.h>
int main()
{
    int a[5][5],i,j,n;
    float ab,sum1=0,sum=0;
    printf("Enter Size Of Matrix:\n");
    scanf("%d",&n);                                         
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
         scanf("%d",&a[i][j]);
        }
    }
     for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            sum1++;
            if(a[i][j]==0)                      //          important
            {
                sum++;
            }
        }
    }
    ab=(sum/sum1)*100;
    if(ab>50)
    {
    printf("It Is A Sparse Matrix \nSum=%f\n",ab);
    }
    else{
        printf("Not A Sparse Matrix");
    }
}
•	Check the symmetric matrix.
#include<stdio.h>
int main()
{
    int arr[5][5],i,j,n,ctr=0;
    printf("Enter How Many Size:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)                            //          important
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(arr[i][j]!=arr[j][i])
            {
                ctr=1;
            }
        }
    }
    if(ctr==0)
    {
        printf("Symmetric Matrix");
    }
    else
    {
        printf("not a Symmetric Matrix");
    }
}