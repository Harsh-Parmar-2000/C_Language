#include<stdio.h>
//#include<string.h>
#define MEMB 10
struct family{
    int age;
    char name[20];
    int SonId;
    int ParentId;
};
void choice1(struct family *data);
//int choice2(struct family *data);
//void choice1(struct family *data);
void main()
{
    int choice;
    struct family data[]={{80,"ChironjiLal,Suman",0,1},{60,"Aravind,prabha",1,2},{85,"Satish,Jainmati",1,3},{48,"Sanjay,Radha",1,4},{58,"jrjadhav,meera",1,5},{55,"Subhash,HiraMani",1,6},{53,"Anil,Pramila",1,6},{20,"Harsh",3},{15,"Bhavishya",3}};
    printf("How You Want To Print Your Data Press 1 For Family Tree 2 For Sort By Age In Ascending Order 3 For Sort In Descending Order 4 For Search A Element");
    scanf("%d",&choice);
    if(choice==1){
        choice1(data);
    }
    else if(choice==2){
        int i,j;
        struct family temp;
        for(i=0;i<MEMB;i++)
        {
            for(j=i+1;j<MEMB;j++)
           {
                if(data[i].age>data[j].age){
                    temp=data[i];
                    data[i]=data[j];
                    data[j]=temp;
                }
           }
        }
       choice1(data);
    }
    
    else if(choice==3){
        int i,j;
        struct family temp;
        for(i=0;i<MEMB;i++)
        {
            for(j=i+1;j<MEMB;j++)
           {
                if(data[i].age<data[j].age){
                    temp=data[i];
                    data[i]=data[j];
                    data[j]=temp;
                }
           }
        }
       choice1(data);
    }
    else if(choice==4){
        int i,j;
        char name[20];
       // gets(name);
      //  for(int i=0;i<MEMB;i++){
//            if(strcmp(data[i].name,name)==0)
  //          {
                printf("Parent Name===");
    //        }
      //  }
        choice1(data);

    }
 }
