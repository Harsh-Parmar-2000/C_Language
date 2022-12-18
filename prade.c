//	Left rotate an array.
#include<stdio.h>
int main()
{
    int rot,k,arr[20],n,i,j,temp=0;
    printf("Enter Size:\n");
    scanf("%d",&n);
    printf("Enter Rotation:\n");
    scanf("%d",&rot);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(k=1;k<=rot;k++)
    {
    temp=arr[0];
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

#include<stdio.h>
int main()
{
    int rot=2,i,j,k,n,arr[20],temp;
    printf("Enter Size :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<=rot;j++)
    {
    temp=arr[n-1];
    for(i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];                //important
    }
    arr[0]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

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
            sum=0;
            for(k=0;k<n;k++)
            {
                arr[i][j]=a[i][k]*b[k][j];
                sum=sum+arr[i][j];
            }
            arr[i][j]=sum;
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

•	Sum of the main diagonal elements of a matrix.
#include<stdio.h>
int main()
{
    int name[5][5],n,i,j,sum=0;
    printf("Enter Row ==column\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&name[i][j]);
        }
    }                                                       //important
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i==n-j-1)
            {
                sum=sum+name[i][j];
                printf("%d ",name[i][j]);
            }
            else
            printf("  ");
        }
        printf("\n");
    }
    printf("-----%d",sum);
}


•	Search all occurrences of a word in a given string.
#include<stdio.h>
int main()
{
    char name[40],word[10];
    int i,j,flag=0;
    printf("Enter A String:\n");
    gets(name);
    printf("Enter Word:\n");
    gets(word);
    for(i=0;name[i]!='\0';i++)
    {
        flag=0;
        if(name[i]==word[0])                            //  important
        {
            for(j=0;word[j]!='\0';j++)
            {
                if(name[i+j]!=word[j])
                {
                    flag=1;
                }
            }
            if(flag==0)
            {
                printf("Founded at %d\n",i);
            }
        }
    }
}

•	Reverse order of words in a given string.
#include<stdio.h>
#include<string.h>
int main()
{
    char name[30];
    int i,c=0;
    printf("Enter A String:\n");
    gets(name);
    c=strlen(name);
    for(i=c-1;i>=0;i--)
    {
        if(name[i]==' ')
        {
            name[i]='\0';
            printf("%s ",&name[i]+1);
        }
    }
    printf("%s ",name);
}

#include<stdio.h>
int main()
{
    int n,i,j;
    printf("Enter How Many Size:\n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            if(i%2!=0)
            {
                if(j%2!=0)
                {
                    printf("1");
                }
                else
                printf("0");
            }
            else
            {
                if(j%2!=0)
                {
                    printf("0");
                }
                else
                {
                    printf("1");
                }
            }
        }
        printf("\n");
    }
}