#include<stdio.h>
#include<conio.h>
#include<string.h>
void child(char[],int,int,int);
void main(){
    int puripidi,pidi,bachche;
    char dada5th[10],dadi5th[10],strp[2000];
    gets(dada5th);
    gets(dadi5th);
    printf("%s-----%s",dada5th,dadi5th);
    printf("Enter How Many pidi");
    scanf("%d",&puripidi);
    for(int i=2;i<=puripidi;i++){
        printf("\nEnter Pidi %d bachce\n",i-1);
        scanf("%d",&bachche);
        child(strp,puripidi,i,bachche);
    }
}
void child(char p[],int puripidi,int filhalpidi,int bachche)
{
    int b;
    char naamPati[10],naamPatni[10];
    if(puripidi>filhalpidi)
    {
    if(bachche>0){
        gets(naamPati);
        gets(naamPatni);
        strcpy(p,naamPati);
        strcpy(p,naamPatni);
        child(p,puripidi,filhalpidi,bachche-1);
        puts(p);
    }
    else{
            printf("\n");
            printf("Enter pidi %d bachche",filhalpidi-1);
            scanf("%d",&b);
            child(p,puripidi,filhalpidi+1,b);
        }
    }
    else{
        return;
    }
}
