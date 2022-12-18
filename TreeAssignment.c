#include <stdio.h>
#include <string.h>
#define MEMB 21
struct family{
    int age;
    char name[20];
    int SonId;
    int ParentId;};
void choice1(struct family *data);
void main(){
    int choice, Roko;
    char name1[20];
    struct family data[] = {{150, "DhulChand,ManiBai", 0, 1}, {90, "Ashok,Sharda", 1, 2}, {80, "ChironjiLal,Suman", 1, 3}, {60, "Aravind,prabha", 2, 4}, {58, "Satish,Jainmati", 2, 5}, {48, "Sanjay,Radha", 2, 6}, {58, "jrjadhav,meera", 2, 7}, {55, "Subhash,SonuMani", 2, 8}, {50, "Anil,Pramila", 2, 9}, {41, "Arun,Mamta", 4, 10}, {38, "Ajay,Priyanka", 4, 11}, {37, "Rajni,Sachin", 4, 12}, {29, "Deepika", 5, 13}, {25, "Mayank", 5, 14}, {22, "Abhay", 5, 15}, {21, "Harsh", 6, 16}, {15, "Bhavishya", 6, 17}, {12, "ParthParmar", 9, 18}, {4, "PrayuParmar", 9, 19}, {10, "AdhyanParmar", 10, 20}, {7, "Shanvi", 10, 21}};
    do{
        printf("How You Want To Print Your Data :-\n\t\tPress 1 For Family Tree\n\t\t2 For Sort By Age In Ascending Order\n\t\t3 For Sort In Descending Order\n\t\t4 For Search A Element\n");
        printf("Enter Your Choice:-");
        scanf("%d", &choice);
        if (choice == 1){
            choice1(data);}
        else if (choice == 2){
            int i, j;
            struct family temp;
            for (i = 0; i < MEMB; i++){
                for (j = i + 1; j < MEMB; j++){
                    if (data[i].age > data[j].age){
                        temp = data[i];
                        data[i] = data[j];
                        data[j] = temp;}}}
            choice1(data);}
        else if (choice == 3){
            int i, j;
            struct family temp;
            for (i = 0; i < MEMB; i++){
                for (j = i + 1; j < MEMB; j++){
                    if (data[i].age < data[j].age){
                        temp = data[i];
                        data[i] = data[j];
                        data[j] = temp;}}}
            choice1(data);}
        else if (choice == 4){
            int i, j, val = 1;
            printf("\nEnter Name To Search:-\n");
            scanf("%s", name1);
            for (i = 0; i < MEMB; i++){
                val = strcmp(data[i].name, name1);
                if (val == 0){
                    for (j = 0; j < MEMB; j++){
                        if (data[i].SonId == data[j].ParentId){
                            printf("Parent is= %s\n\n", data[j].name);}}}}
            choice1(data);}
        printf("\nDo You Want To Continue:-\n");
        scanf("%d", &Roko);
    } while (Roko != 0);}
    void choice1(struct family *data){
    printf("\t\t\t\t\t___________________________\n");
    printf("\t\t\t\t\t|%s--%d|\n", data[0].name, data[0].age);
    printf("\t\t\t\t\t|________________________|\n");
    printf("\t\t\t______________________|______________________\n");
    printf("\t\t|%s--%d|\t\t   |%s--%d|\n", data[1].name, data[1].age, data[2].name, data[2].age);
    printf("\t\t______________________________________________|________________________________________________________");
    printf("\n\t\t|\t\t|\t\t\t|\t\t\t|\t\t\t|\t\t|\n");
    printf("|%s--%d| |%s--%d| |%s--%d| |%s--%d| |%s--%d| |%s--%d|\n", data[3].name, data[3].age, data[4].name, data[4].age, data[5].name, data[5].age, data[6].name, data[6].age, data[7].name, data[7].age, data[8].name, data[8].age);
    printf("            |               |                                    |_________________________________________\n");
    printf("            |               |___________________________________________                                   |\n");
    printf("____________|____________________________________        ______________|_________________               ___|____________");
    printf("\n|\t\t\t|\t\t\t | \t|\t\t|\t\t|\t\t|\t\t|\n");
    printf("|%s--%d| |%s--%d| |%s--%d|\t|%s--%d| |%s--%d| |%s--%d| |%s--%d|\t|%s--%d|\n", data[9].name, data[9].age, data[10].name, data[10].age, data[11].name, data[11].age, data[12].name, data[12].age, data[13].name, data[13].age, data[14].name, data[14].age, data[15].name, data[15].age, data[16].name, data[16].age, data[17].name, data[17].age);
    printf("\t  |\t\t  |__________________________\n");
    printf("  ________|_____________________        ____________|__________\n");
    printf("  |\t\t\t\t|\t|\t\t       |\n");
    printf("|%s--%d| |%s--%d| |%s--%d|\t|%s--%d|\n", data[17].name, data[17].age, data[18].name, data[18].age, data[19].name, data[19].age, data[20].name, data[20].age, data[22].name, data[22].age, data[23].name, data[23].age);
}