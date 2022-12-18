//  •	Count the total number of words in a string.
#include<stdio.h>
int main()
{
    int i=0,count=1,cnt=0;
    char  name[120];
    printf("Enter A Sentence :\n");
    gets(name);
    for(i=0;name[i]!='\0';i++)
    {
        //cnt=0;
        if(name[i]!=name[i+1]&&name[i]==' ')
        {
           // if(name[i+1]!=' '){
           // cnt++;
            //if(cnt==0)
            count++;
            //break;
            //}
            //i++;
            
        }
      //  if(name[i]==' ')
      //  count++;
    }
    printf("Total Words = %d",count);
}