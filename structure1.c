#include<stdio.h>
struct book{
    int bno;
    char bname[20];
    int bid;
};
int main()
{
    int i,n;
    struct book b[20];
    printf("Enter How Many Book U Want To Store :\n");
    scanf("%d",&n);
    
    printf("Enter book.bno\tbook.bname\tbook.bid\n");
    for(i=0;i<n;i++)
    {
        scanf("%d%s%d",&b[i].bno,&b[i].bname,&b[i].bid);
    }
    for(i=0;i<n;i++)
    {
        printf("%d\t%s\t%d\n",b[i].bno,b[i].bname,b[i].bid);
    }
}

#include<stdio.h>
struct book{
    int bno;
    char bname[20];
    int bid;
};
int main()
{
    struct book b1,b2,b3;
    printf("Enter Book Id \t Book Name \t Book Pages :\n");
    scanf("%d%s%d",&b1.bno,&b1.bname,&b1.bid);
    scanf("%d%s%d",&b2.bno,&b2.bname,&b2.bid);
    scanf("%d%s%d",&b3.bno,&b3.bname,&b3.bid);
    
    printf("Entered Book Id \t Book Name \t Book Pages :\n");
    printf("%d\t\t%s\t\t%d\n",b1.bno,b1.bname,b1.bid);    
    printf("%d\t\t%s\t\t%d\n",b2.bno,b2.bname,b2.bid);
    printf("%d\t\t%s\t\t%d\n",b3.bno,b3.bname,b3.bid);
}

#include<stdio.h>
#include<string.h>
struct book{
    int bno;
    char bname[20];
    int bid;
};
int main()
{
    struct book b1,b2,b3;
    printf("Enter Book Id \t Book Name \t Book Pages :\n");
    scanf("%d%s%d",&b1.bno,&b1.bname,&b1.bid);
    b2.bno=b1.bno;
    strcpy(b2.bname,b1.bname);
    b2.bid=b1.bid;
    b3=b2;
    printf("Enter Book Id \t Book Name \t Book Pages :\n");
    printf("%d\t\t%s\t\t%d\n",b1.bno,b1.bname,b1.bid);    
    printf("%d\t\t%s\t\t%d\n",b2.bno,b2.bname,b2.bid);
    printf("%d\t\t%s\t\t%d\n",b3.bno,b3.bname,b3.bid);
}

# include <stdio.h>
# define scanf "%s Geeks For Geeks "
int main()
{
printf(scanf, scanf);
getchar();
return 0;
}

#include<stdio.h>
struct book{
    int page;
    char name[20];
    int price;
};
int main()
{
    struct book user[5];
    printf("Enter BOOK PAGES \tBOOK NAME\tBOOK PRICE\n");
    for(int i=1;i<=5;i++)
    scanf("%d%s%d",&user[i].page,&user[i].name,&user[i].price);
    printf("You ENterd BOOK PAGES \tBOOK NAME\tBOOK PRICE\n");
    for(int i=1;i<=5;i++)
    printf("%d\t\t%s\t\t%d",user[i].page,user[i].name,user[i].price);
}