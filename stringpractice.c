//  Find The Lower Frequency Character In A String
#include<stdio.h>
int main()
{
    int i,j,k,count=0,max=0,pos=0;
    char name[40];
    puts("Enter A String");
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
                k--;
                j--;
            }
        }
        if(count<max)
        {
            max=count;
            pos=i;
        }
    }
    printf("Lower Frequency =%c And %d Times",name[pos],max+1);
}