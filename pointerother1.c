//  square root Of Two Number
#include<stdio.h>
int square(int *,int *);
int main()
{
    int a=5,b=2;
    square(&a,&b);
    printf("a=%d\tb=%d",a,b);
}
int square(int * n , int * m)
{
    *n=*n**n;
    *m=*m**m;
}


#include<stdio.h>
int main()
{
    float a=13.5;
    float *b,*c;
    b=&a;
    c=b;
    printf("%u %u %u\n",&a,b,c);
    printf("%f %f %f %f %f\n",a,*(&a),*&a,*b,*c);
}