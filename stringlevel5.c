//  Find The Higher Frequency Character In A String
#include<stdio.h>
int main()
{
    int i,j,k,count=1,max=0,pos=0;
    char name[20];
    printf("Enter A String :\n");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        count=1;
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
        if(count>max)
            {
                max=count;
                pos=i;
            }
    }
    printf("%d higher frequerny of %c",max,name[pos]);
}