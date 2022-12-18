#include<stdio.h>
int main()                   
{
    int f=0,i,n,a,b,c,d,e,k=0,sum=0;
    float per;
    for(i=1;i<=3;i++)                                   
    {   
        printf("\n\n\n           %d YEAR EXAMINATION\n\n",i);
        printf("    Enter Your Marks From 0 To 100\n");
        printf("\n    Enter Your Marks In DS  :   ");
        scanf("%d",&a);
        printf("\n    Enter Your Marks In C   :   ");
        scanf("%d",&b);
        printf("\n    Enter Your Marks In CF  :   ");
        scanf("%d",&c);
        printf("\n    Enter Your Marks In OS  :   ");
        scanf("%d",&d);
        printf("\n    Enter Your Marks In ML  :   ");
        scanf("%d",&e);
        sum=a+b+c+d+e;
        per=(float)sum/5;                         
        
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
            printf("|  4 |  OS      |   100     |    %d   |\n",d);
            printf("|  5 |  ML      |   100     |    %d   |\n",e);
            printf("|____|__________|___________|_________|\n");
            printf("|                 | TOTAL  =     %d  |\n",sum);
            printf("|                 | PERCENT=   %.2f  |\n",per);
            printf("|___RESULT:-______|___________________|\n");
        }
        f=0;
        k=0;
        if(a<36)                                                        
        {   
            printf("|        Supplimentary In DS          |\n");
            f=f+1;
        }
        if(b<36)
        {
            printf("|        Supplimentary In C           |\n");
            f=f+1;
        }
        if(c<36)
        {   
            printf("|        Supplimentary In CF          |\n");
            f=f+1;
        }
        if(d<36)
        {   
            printf("|        Supplimentary In OS          |\n");
            f=f+1;
        }
        if(e<36)
        {  
            printf("|        Supplimentary In ML          |\n");
            f=f+1;
        }
            printf("|_____________________________________|\n");    
        if(f==2||f==1) 
        {
            printf("\n\n      Give Your Supplimentary Exam     \n");
            printf("         !!  BEST OF LUCK  !!\n");
            k=0;
        }        
        if(f>=3)
        {
            printf("             Year Back                 \n");
            printf("          !! TRY AGAIN  !!             \n");
            k=k+1;
            i--;
        }
        if(k!=1)
        {
                if(a<36)
                {
                    printf("_______________________________________\n");
                    printf("|         SUPPLIMENTARY EXAM          |\n");
                    printf("|                 DS                  |\n");
                    printf("    OUT OF 100 YOUR MARKS ARE  = ");
                    int chga;
                    scanf("%d",&chga);
                    a=chga;
                    if(a<36)
                    {
                        printf("|            FAILED IN DS             |\n");
                        printf("|           !! YEAR BACK !!           |\n");
                        printf("|_____________________________________|\n");
                        k=k+1;
                        i--;
                    }
                    else{
                        printf("|           PASSED BY SUPPLY          |\n");
                        printf("|_____________________________________|\n");
                    }
                }
                if(b<36)
                {
                    printf("_______________________________________\n");
                    printf("|         SUPPLIMENTARY EXAM          |\n");
                    printf("|                 C                   |\n");
                    printf("    OUT OF 100 YOUR MARKS ARE  = ");
                    int chgb;
                    scanf("%d",&chgb);
                    b=chgb;
                    if(b<36)
                    {
                        printf("|             FAILED IN C             |\n");
                        printf("|           !! YEAR BACK !!           |\n");
                        printf("|_____________________________________|\n");
                        k=k+1;
                        if(k==1)
                        {
                        i--;
                        }
                    }
                    else{
                        printf("|          PASSED BY SUPPLY           |\n");
                        printf("|_____________________________________|\n");
                    }
                }
                if(c<36)
                {
                    printf("_______________________________________\n");
                    printf("|         SUPPLIMENTARY EXAM          |\n");
                    printf("|                 CF                  |\n");
                    printf("    OUT OF 100 YOUR MARKS ARE  = ");
                    int chgc;
                    scanf("%d",&chgc);
                    c=chgc;
                    if(c<36)
                    {
                        printf("|             FAILED IN CF            |\n");
                        printf("|           !! YEAR BACK !!           |\n");
                        printf("|_____________________________________|\n");
                        k=k+1;
                        if(k==1)
                        {
                        i--;
                        }
                    }
                    else{
                        printf("|          PASSED BY SUPPLY           |\n");
                        printf("|_____________________________________|\n");
                    }
                }
                if(d<36)
                {
                    printf("_______________________________________\n");
                    printf("|         SUPPLIMENTARY EXAM          |\n");
                    printf("|                 OS                  |\n");
                    printf("    OUT OF 100 YOUR MARKS ARE  = ");
                    int chgd;
                    scanf("%d",&chgd);
                    d=chgd;
                    if(d<36)
                    {
                        printf("|            FAILED IN OS             |\n");
                        printf("|           !! YEAR BACK !!           |\n");
                        printf("|_____________________________________|\n\n");
                        k=k+1;
                        if(k==1)
                        {
                        i--;
                        }
                    }
                    else{
                        printf("|          PASSED BY SUPPLY           |\n");
                        printf("|_____________________________________|\n\n");
                    }
                }
                if(e<36)
                {
                    printf("_______________________________________\n");
                    printf("|         SUPPLIMENTARY EXAM          |\n");
                    printf("|                 ML                  |\n");
                    printf("    OUT OF 100 YOUR MARKS ARE  = ");
                    int chge;
                    scanf("%d",&chge);
                    e=chge;
                    if(e<36)
                    {
                        printf("|            FAILED IN ML             |\n");
                        printf("|           !! YEAR BACK !!           |\n");
                        printf("|_____________________________________|\n\n");
                        k=k+1;
                        if(k==1)
                        {
                        i--;
                        }
                    }
                    else{
                        printf("|          PASSED BY SUPPLY           |\n");
                        printf("|_____________________________________|\n\n\n\n");
                    }
                }
        }
        int sum1;
        float per1;
        if(a>36&&b>36&&c>36&&d>36&&e>36)                         
        {
            sum1=a+b+c+d+e;
            per1=(float)sum1/5;
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
            printf("|  4 |  OS      |   100     |    %d   |\n",d);
            printf("|  5 |  ML      |   100     |    %d   |\n",e);
            printf("|____|__________|___________|_________|\n");
            printf("|                 | TOTAL  =     %d  |\n",sum1);
            printf("|                 | PERCENT=   %.2f  |\n",per1);
            printf("|___RESULT:-______|___________________|\n");
            printf("|__CONGRATULATIONS YOU PASSED %d YEAR__|\n",i);
            printf("|_____________________________________|\n");
        }
        int year1,year2,year3;
        int chmark,choice;
        float agre1,agre2,agre3;
        if(i==1)
        {
            year1=sum1;
            agre1=per1;
        }
        if(i==2)
        {
            year2=sum1;
            agre2=per1;
        }
        if(i==3)
        {
            year3=sum1;
            agre3=per1;
        }
        if(i==3)
        {
            int   allmarks=year1+year2+year3;
            float allagre =(agre1+agre2+agre3)/3;
            printf("DO YOU WANT THREE YEAR PERFORMANCE CARD ??\nEnter ( 1 ) For YES ( PRESS ANY BUTTON ) For No\n");
            scanf("%d",&chmark);
            if(chmark==1)
            {
                printf("___________________________________________\n");
                printf("|             INSTITUTE OF                 |\n");
                printf("|       SINGAJI          SCIENCE           |\n");         
                printf("|    SANT                      AND         |\n");
                printf("|SHRI                            MANAGEMENT|\n");
                printf("|           THREE YEAR RESULT              |\n");
                printf("|                                          |\n");
                printf("|      ROLL NO   :-         2021           |\n");
                printf("|      NAME      :-     CODE BUILDER       |\n");
                printf("|   *---------------------------------*    |\n");
                printf("|  ______________________________________  |\n");
                printf("|  |  YEAR  | OUT OF | MARKS |  PERCENT |  |\n");
                printf("|  |  1ST   |  500   |  %d   |  %.2f  |  |\n",year1,agre1);
                printf("|  |  2ND   |  500   |  %d   |  %.2f  |  |\n",year2,agre2);
                printf("|  |  3RD   |  500   |  %d   |  %.2f  |  |\n",year3,agre3);
                printf("|  |------------------------------------|  |\n");
                printf("|  |  3 YEAR OVERALL    %d      %.2f  |  |\n",allmarks,allagre);
                printf("|  |____________________________________|  |\n");
                printf("|                                          |\n");
                printf("|__________________________________________|\n");
            }
            else{
                printf("                 THANKS\n");
            }
        }
        if(i==3)
        {
            printf("    ?? BAHUBALI NE KATTAPPA KO KYU MAARA ??\nEnter ( 1 ) For VIEW ( Press Any Button ) For No\n");
            scanf("%d",&choice);
            if(choice==1)
            {
                printf("_________________________________________________________________________________________\n");
                printf("|     |============|                           INSTITUTE OF                             |\n");
                printf("|     | __________ |                   SINGAJI              SCIENCE                     |\n");         
                printf("|     | | DEGREE | |              SANT                              AND                 |\n");
                printf("|     | |________| |         SHRI                                       MANAGEMENT      |\n");
                printf("|      ************                                                                     |\n");
                printf("|       **********                      CERTIFICATION OF COMPLETION                     |\n");
                printf("|        ********                             (YEAR 2021-22)                            |\n");
                printf("|         ******                                                                        |\n");
                printf("|          ****           THIS IS TO CERTIFY THAT ----CODE BUILDER---- SUCCESSFULLY     |\n");
                printf("|           **                COMPLETED THE PROGRAM GIVEN BY COLLEGE DIRECTOR           |\n");
                printf("|                                            MR.PRANJAL DUBEY                           |\n");
                printf("|       ___________                      WE THANKS A LOT TO EVERYONE                    |\n");
                printf("|       |#########|                 WE HOPE YOU ENJOYED OUR PRESENTATION                |\n");
                printf("|       |#########|                KATTAPPA NE BAHUBALI KO ISLIYE MAARA                 |\n");
                printf("|       |#########|              KYUKI USKE PAAS SSISM KI DEGREE NAHI THI               |\n");
                printf("|       | QR CODE |                   AAP SABHI KE PATIENCE KO SALAAM                   |\n");
                printf("|              ____           ____________                           _______________    |\n");
                printf("|                             PRINCIPAL                                  DIRECTOR       |\n");
                printf("|_______________________________________________________________________________________|\n");
            }
            else{
                printf("Anytime Your Degree Available So Contact College");
            }
        }
        
    }
    return 0;
}