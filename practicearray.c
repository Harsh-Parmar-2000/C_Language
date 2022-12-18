•	Insert An Element Desired or Specific Position In An Array
#include<stdio.h>
int main()
{
    int arr[20],i,j,k,n,ele,pos;
    printf("Enter A Size Of Array :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter A Position :\n");
    scanf("%d",&ele);
    printf("Enter A Position :\n");
    scanf("%d",&pos);                                   //  very very important
    n++;
    for(i=n-1;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=ele;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
•	Remove Duplicates Items In An Array
#include<stdio.h>
int main()
{
    int n,arr[20],i,j,k;
    printf("Enter Elements :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    printf("%d",arr[i]);
}
•	Delete Element From Array At Desired Or Specific Position
#include<stdio.h>
int main()
{
    int arr[20],i,j,n,pos;
    printf("Enter Element Position:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Element Position:\n");
    scanf("%d",&pos);
    pos--;
        for(j=pos;j<n;j++)
        {
            arr[j]=arr[j+1];
        }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
•	Print “I AM IDIOT” Instead Of Your Name Using Array
•	Check String Is Palindrome Or Not Using For Loop
#include<stdio.h>
int main()
{
    char name[20];
    int len=0,i=0,j=0,flag=0;
    gets(name);
    while(name[i]!='\0')
    {
        len++;
        i++;
    }   
    i=1;
    while(name[i]!='\0')
    {
       if(name[i]!=name[len-i-1])
       {                                                    //important
           flag=1;
       }
        i++;
    }   
    if(flag==0)
    {
        printf("Pallindrome");
    }
    else
    printf("Not A Pallindrome");
}
•	Convert All Input String Simultaneously Into Asterisk ( * )
•	Read and print elements of the array. – using recursion.
#include<stdio.h>
int read(int [],int,int);
int write(int [],int,int);
int main()
{
    int a[20],n;
    printf("Enter How Many Element U Want:\n");
    scanf("%d",&n);
    read(a,0,n);
    write(a,0,n);
}
int read(int a[],int i,int n)
{
    if(n>i)
    {
        scanf("%d",&a[i]);
    }
    else
    {                                       //important
        return 1;
    }
    read(a,i+1,n);
}

int write(int a[],int i,int n)
{
    if(n>i)
    {
        printf("%d ",a[i]);
    }
    write(a,i+1,n);
}
•	Print all negative elements in an array.
#include<stdio.h>
int main()
{
    int arr[20],n,i;
    printf("Enter How Many Element U Want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            printf("%d ",arr[i]);
        }
    }
}
•	Sum of all array elements. – using recursion.
#include<stdio.h>
int sum(int [],int,int,int);
int main()
{
    int arr[20],n,i,s=0,s1=0;
    printf("Enter How Many Element:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }                                                   //important
    s=sum(arr,0,n,s1);
    printf("Sum=%d",s);
}
int sum(int arr[],int i,int n,int sum1)
{
    if(n>i)
    {
        sum1=sum1+arr[i];
    }
    else
        return sum1;
    sum(arr,i+1,n,sum1);
}
•	Find a maximum and minimum element in an array. – using recursion.
#include<stdio.h>
int max(int [],int,int,int);
int min(int [],int,int,int);
int main()
{
    int a=0,b=0,arr[20],n,i,m=0;
    printf("Enter A Size Of An Array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    a=max(arr,0,n,m);
    b=min(arr,0,n,m=arr[0]);
    printf("\nMaximum=%d",a);
    printf("\nMinimum=%d",b);
}
int max(int arr[],int i,int n,int m)
{
    if(n>i)
    {
        if(arr[i]>m)
        {
            m=arr[i];
        }
    }
    else{
        return m;
    }
    max(arr,i+1,n,m);
}

int min(int arr[],int i,int n,int m)
{
    if(n>i)
    {
        if(arr[i]<m)
        {
            m=arr[i];
        }
    }
    else{
        return m;
    }
    min(arr,i+1,n,m);
}
•	Get the second largest element in an array.
#include<stdio.h>
int main()
{
    int arr[20],i,n,second=0,max=0;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]>max)
        {                               //important
            second=max;
            max=arr[i];
        }
        else if(arr[i]>second)
        {
            second=arr[i];
        }
    }
    printf("Second Largest=%d",second);
}
•	Count the total number of even and odd elements in an array.

#include<stdio.h>
int main()
{
    int arr[20],i,n,odd=0,even=0;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {                                       
            odd++;
        }
        if(arr[i]%2==0)
        {
            even++;
        }
    }
    printf("\nOdd=%d",odd);
    printf("\nEven=%d",even);
}
•	Count the total number of negative elements in an array.
ray.
#include<stdio.h>
int main()
{
    int arr[20],i,n,odd=0,even=0;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=0)
        {
            odd++;
        }
    }
    printf("\nNegative Element=%d",odd);
}
•	Copy all elements from an array to another array.
#include<stdio.h>
int main()
{
    int arr[20],barr[20],i,n,odd=0,even=0;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {                                                               // very important
        barr[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",barr[i]);          
    }
}
•	Insert an element in an array.
#include<stdio.h>
int main()
{
    int arr[20],i,j,n,odd,pos;
    printf("Enter Size Of Array :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter A Element :\n");
    scanf("%d",&odd);
    printf("Enter A Element :\n");
    scanf("%d",&pos);
    n++;
    for(i=n;i>=pos;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[pos]=odd;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
•	Delete an element from an array at the specified position.
#include<stdio.h>
int main()
{
    int arr[20],i,n,pos;
    printf("Enter A Element:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter Which Element U Want To delete:\n");
    scanf("%d",&pos);
    for(i=pos;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    n--;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
•	Count frequency of each element in an array.
#include<stdio.h>
int main()
{
    int arr[20],count=0,i,j,k,n,pos;
    printf("Enter A Element:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {                                                       //important
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
        printf("\n%d=====%d",arr[i],count);
    }
}
•	Print all unique elements in the array.
#include<stdio.h>
int main()
{
    int arr[20],unique[20],count=0,i,j,k,n,pos;
    printf("Enter A Element:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                unique[i]=i;
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                n--;                                            //important
            }
        }
        // if(count!=0)
        // {
        //     printf("%d ",arr[i]);
        // }
    }
     for(i=0;i<n;i++)
     {
         if(unique[i]!=i)
         printf("%d ",arr[i]);
     }
}
•	Count the total number of duplicate elements in an array.
#include<stdio.h>
int main()
{
    int cnt=1,arr[20],i,j,n,k;
    printf("Enter How Many Element U Want :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                cnt++;
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                k--;
                n--;
            }
        }
    }
    printf("Count=%d",cnt);
}
•	Delete all duplicate elements from an array.
#include<stdio.h>
int main()
{
    int arr[20],n,i,j,k;
    printf("Enter Size Of Array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)                                  //important
        {
            if(arr[i]==arr[j])
            {
                for(k=j;k<n;k++)
                {
                    arr[k]=arr[k+1];
                }
                j--;
                n--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
•	Merge two arrays to the third array.
#include<stdio.h>
int main()
{
    int arr[20],barr[20],carr[20],i,n;
    printf("Enter How Many Element U Want :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&barr[i]);
    }
    for(i=0;i<n;i++)
    {
        carr[i]=arr[i];
    }
    for(i=0;i<n;i++)
    {
        carr[n+i]=barr[i];
    }
    for(i=0;i<n*2;i++)
    {
        printf("%d ",carr[i]);
    }
}
•	Find the reverse of an array.
#include<stdio.h>
int main()
{
    int arr[20],i,n;
    printf("Enter How Many Element U want:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("BEfore:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }                                                   //important
    printf("After:\n");
    for(i=n-1;i>=0;i--)
    {
        printf("%d ",arr[i]);
    }
}
•	Put even and odd elements of an array in two separate arrays.
#include<stdio.h>
int main()
{
    int arr[20],even[20],odd[20],i,n,j=0,k=0;
    printf("Enter A Size Of Array:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            even[j]=arr[i];
            j++;
        }
        else                                    // important
        {
            odd[k]=arr[i];
            k++;
        }
    }
    for(i=0;i<j;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\nOdd:\n");
    for(i=0;i<k;i++)
    {
        printf("%d ",odd[i]);
    }
}
•	Search an element in an array.
#include<stdio.h>
int main()
{
    int arr[20],i,n,ser=0;
    printf("Enter A Element:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter A Element:\n");
    scanf("%d",&ser);
    for(i=0;i<n;i++)
    {
        if(ser==arr[i])
        {
            printf("%d Founded At %d\n",arr[i],i);
        }
    }
}
•	Sort array elements in ascending or descending order.
#include<stdio.h>
int main()
{
    int arr[20],i,j,n,ser=0,temp=0;
    printf("Enter A Element:\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)                                      //  important
        {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    printf("Ascending :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(arr[i]<arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
        }
    }
    printf("\nDescending :\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}
//  •	Sort even and odd elements of the array separately.
•	Left rotate an array.
#include<stdio.h>
int main()
{
    int arr[20],n,i,temp=0;
    printf("Enter A Size :\n");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {                                               //important
        scanf("%d",&arr[i]);
    }
    temp=arr[0];
    for(i=0;i<n;i++)
    {
        arr[i]=arr[i+1];
    }
    arr[n-1]=temp;
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

•	Right rotate an array.
#include<stdio.h>
int main()
{
    int arr[20],n,i,j,temp=0,k;
    printf("Enter A Size :\n");
    scanf("%d",&n);
    printf("Enter How Many Time Rotate:\n");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(j=1;j<=k;j++)                           //important
    {
    temp=arr[n-1];
    for(i=n-1;i>=0;i--)
    {
        arr[i+1]=arr[i];
    }
    arr[0]=temp;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}