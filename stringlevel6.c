//  Find The Lower Frequency Character In A String
#include<stdio.h>
int main()
{
    int i,j,k,pos=0,count=0,max=0;
    char name[50];
    printf("Enter A String :\n");
    gets(name);
    max=name[0];
    for(i=0;name[i]!='\0';i++)
    {
        count=0;
        for(j=i+1;name[j]!='\0';j++)
        {
            if(name[i]==name[j])
            {
                count++;
                for(k=j;name[k]!='\0';k++)
                {
                    name[k]=name[k+1];
                }
                j--;
                k--;
            }
        }
        if(count<max)
            {
                max=count;
                pos=i;
            }
    }
    printf("%d lower %c",count+1,name[pos]);
}