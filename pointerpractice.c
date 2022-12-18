/* Pointer : Show the basic declaration of pointer :                                                            
-------------------------------------------------------                                                       
 Here is m=10, n and o are two integer variable and *z is an integer                                          
                                                                                                              
 z stores the address of m  = 0x7ffd40630d44                                                                  
                                                                                                              
 *z stores the value of m = 10                                                                                
                                                                                                              
 &m is the address of m = 0x7ffd40630d44                                                                      
                                                                                                              
 &n stores the address of n = 0x7ffd40630d48                                                                  
                                                                                                              
 &o  stores the address of o = 0x7ffd40630d4c                                                                 
                                                                                                              
 &z stores the address of z = 0x7ffd40630d50    */
 #include<stdio.h>
 int main()
 {
     int m=10,n,o,*z;
     z=&m;
    printf("z stores the address of m =%u\n",z);                                                                
                                                                                                              
    printf("*z stores the value of m = %d\n",*z);                                                                               
                                                                                                              
    printf("&m is the address of m =%u\n",&m);                                                                  
                                                                                                              
 printf("&n stores the address of n = %u\n",&n);                                                                  
                                                                                                              
 printf("&o  stores the address of o =%p\n",&o);                                                                 
                                                                                                              
 printf("&z stores the address of z = %u\n",&z);
 }
 //find the length of string using pointer
 #include<stdio.h>
 int main()
 {
     char name[20],i,*ch,k=0;
     gets(name);
     ch=name;
     for(i=0;*ch!='\0';i++)
     {
         k++;
         ch++;
     }
     printf("len=%d",k);
 }
 /* Write a program in C to find the factorial of a given number using pointers. Go to the editor
Test Data :
Input a number : 5
Expected Output :

The Factorial of 5 is : 120     */
#include<stdio.h>
int main()
{
    int num,*n,i;
    printf("Enter A Number To Find Factorial :\n");
    scanf("%d",&num);
    *n=1;
    for(i=1;i<=num;i++)
    {
        *n=*n*i;
    }
    printf("The Factorial =%d",*n);
}