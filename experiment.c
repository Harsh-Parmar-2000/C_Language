#include<stdio.h>
int main()
{
    int f=0,i,n,a,b,c,d,e,k=0,sum=0;
    
    for(i=1;i<=3;i++)
    {   
        printf("           %d Year Student\n",i);
        printf("%d",i);
        printf("Enter Your Marks In DS: ");
        scanf("%d",&a);
        printf("\nEnter Your Marks In C : ");
        scanf("%d",&b);
        printf("\nEnter Your Marks In CF: ");
        scanf("%d",&c);
        printf("\nEnter Your Marks In ED: ");
        scanf("%d",&d);
        printf("\nEnter Your Marks In ML: ");
        scanf("%d",&e);
        sum=a+b+c+d+e;
        if( a<36 ||  b<36   ||  c<36  ||   d<36   ||  e<36 )
        {
            printf("_______________________________________\n");
            printf("|      Shri Sant Singaji Institute    |\n");
            printf("|             Sandalpur               |\n");
            printf("|             MARKSHEET               |\n");
            printf("|           BCA   -  ITEG             |\n");
            printf("|            (2021-2022)              |\n");
            printf("|_____________________________________|\n");
            printf("| SR.| SUBJECT  |  OUT OF   |   MARKS |\n");
            printf("|  1 |  DS      |   100     |    %d   |\n",a);
            printf("|  2 |  C       |   100     |    %d   |\n",b);
            printf("|  3 |  CF      |   100     |    %d   |\n",c);
            printf("|  4 |  ED      |   100     |    %d   |\n",d);
            printf("|  5 |  ML      |   100     |    %d   |\n",e);
            printf("|____|__________|___________|_________|\n");
            printf("|                 | TOTAL  =     %d  |\n",sum);
            printf("|                 | PERCENT=     %d  |\n",sum);
            printf("|___RESULT:-______|___________________|\n");
        }
        f=0;
        k=0;
        if(a<36)
        {   
            printf("|        Supplimentary In DS         |\n");
            f=f+1;
        }
        if(b<36)
        {
            printf("|Supply In C                          |\n");
            f=f+1;
        }
        if(c<36)
        {   
            printf("|Supply In CF                         |\n");
            f=f+1;
        }
        if(d<36)
        {   
            printf("|Supply In ED                         |\n");
            f=f+1;
        }
        if(e<36)
        {
            printf("|Supply In ML                         |\n");
            f=f+1;
        }
            printf("|_____________________________________|\n");
            
        if(f==2||f==1)
        {
            printf("Give Your Supplimentary Exam\n");
            k=0;
        }        
        if(f>=3)
        {
            printf("Year Back\n");
            k=k+1;
            i--;
        }
              
        if(k!=1)
        {
                if(a<36)
                {
                    printf("SUPPLIMENTRY EXAM\n         DS\n");
                    int chga;
                    scanf("%d",&chga);
                    a=chga;
                    if(a<36)
                    {
                        printf("Failed In DS");
                        k=k+1;
                        i--;
                    }
                    else{
                        printf("Passed In Supply\n");
                        k=0;
                    }
                }
                if(k!=2){
                if(b<36)
                {
                    printf("SUPPLIMENTRY EXAM\n         C\n");
                    int chgb;
                    scanf("%d",&chgb);
                    b=chgb;
                    if(b<36)
                    {
                        printf("Failed In c");
                        k=k+1;
                        i--;
                    }
                    else{
                        printf("Passed In Supply\n");
                        k=0;
                    }
                }
                }
                if(k!=3){
                if(c<36)
                {
                    printf("SUPPLIMENTRY EXAM\n         CF\n");
                    int chgc;
                    scanf("%d",&chgc);
                    c=chgc;
                    if(c<36)
                    {
                        printf("Failed In CF");
                        k=k+1;
                        i--;
                    }
                    else{
                        printf("Passed In Supply\n");
                        k=0;
                    }
                }
                }
                if(k!=3){
                if(d<36)
                {
                    printf("SUPPLIMENTRY EXAM\n         ED\n");
                    int chgd;
                    scanf("%d",&chgd);
                    d=chgd;
                    if(a<36)
                    {
                        printf("Failed In ED");
                        k=k+1;
                        i--;
                    }
                    else{
                        printf("Passed In Supply\n");
                    }
                }
                }
                if(k!=3){
                if(e<36)
                {
                    printf("SUPPLIMENTRY EXAM\n         ML\n");
                    int chge;
                    scanf("%d",&chge);
                    e=chge;
                    if(e<36)
                    {
                        printf("Failed In ML");
                        k=k+1;
                        i--;
                    }
                    else{
                        printf("Passed In Supply\n");
                        k=0;
                    }
                }
                }
        }
        if(a>36&&b>36&&c>36&&d>36&&e>36)
        {
            printf("_______________________________________\n");
            printf("|      Shri Sant Singaji Institute    |\n");
            printf("|             Sandalpur               |\n");
            printf("|             MARKSHEET               |\n");
            printf("|           BCA   -  ITEG             |\n");
            printf("|            (2021-2022)              |\n");
            printf("|_____________________________________|\n");
            printf("| SR.| SUBJECT  |  OUT OF   |   MARKS |\n");
            printf("|  1 |  DS      |   100     |    %d   |\n",a);
            printf("|  2 |  C       |   100     |    %d   |\n",b);
            printf("|  3 |  CF      |   100     |    %d   |\n",c);
            printf("|  4 |  ED      |   100     |    %d   |\n",d);
            printf("|  5 |  ML      |   100     |    %d   |\n",e);
            printf("|____|__________|___________|_________|\n");
            printf("|                 | TOTAL  =     %d  |\n",sum);
            printf("|                 | PERCENT=     %d  |\n",sum);
            printf("|___RESULT:-______|___________________|\n");
            printf("|__CONGRATULATIONS YOU PASSED %d YEAR__|\n",i);
            printf("|_____________________________________|\n");
        }
    }
    return 0;
}