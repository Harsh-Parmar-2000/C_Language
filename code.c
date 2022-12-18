#include<stdio.h>
#include<string.h>
struct book{
    char GrandFathername[20];
    char GrandMothername[20];
    char Beta1[20];
    char Betapatni[20];
};
int main()
{
    int bachche;
    struct book b1,b2[3][3],b3;
    printf("Enter GrandMother & GrandFather Name :\n");
    scanf("%s%s",&b1.GrandFathername,&b1.GrandMothername);
    printf("%s----%s",b1.GrandFathername,b1.GrandMothername);
   // strcpy(b2.GrandFathername,b1.GrandFathername);
   // strcat(b2.GrandFathername,b1.GrandMothername);
   // scanf("%d",&bachche);
   for(int i=1;i<=3;i++){       
   //for(int j=1;j<=3;j++)
   //scanf("%s%s",b2[i][j].GrandFathername,b2[i][j].GrandMothername);
   scanf("%s%s",b2[i].GrandFathername,b2[i][j].GrandMothername);
   
   }
   for(int i=1;i<=3;i++)
   {
   for(int j=1;j<=3;j++)
   printf("%s-----%s\t\t\t",b2[i][j].GrandFathername,b2[i][j].GrandMothername);
   }
}