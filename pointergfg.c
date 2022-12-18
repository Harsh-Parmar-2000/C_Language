//  Geeks For Geeks
#include <stdio.h>
int main()
{
    int *ptr;
    int x;
 
    ptr = &x;
    *ptr = 0;
 
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);

    *ptr += 5;
    printf(" x  = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
 
    (*ptr)++;
    printf(" x = %d\n", x);
    printf(" *ptr = %d\n", *ptr);
    return 0;
}
//  x=garbage value ptr=0 x=0 ptr=0 x=5 ptr=5 x=5 ptr=6 
//  2nd
#include<stdio.h>
int main()
{
    int arr[] = {10, 20, 30, 40, 50, 60};
    int *ptr1 = arr;
    int *ptr2 = arr + 5;
    printf("Number of elements between two pointer are: %d.", 
                                (ptr2 - ptr1));
    printf("Number of bytes between two pointers are: %d",  
                              (char*)ptr2 - (char*) ptr1);
    return 0;
}
// my answer is 5 and 5 but answer is 5 and 20
//  3rd
#include<stdio.h> 
int main() 
{ 
   int a; 
   char *x; 
   x = (char *) &a; 
   a = 512; 
   x[0] = 1; 
   x[1] = 2; 
   printf("%d\n",a);   
   return 0; 
}
//  my answer is 512 but answer is 513
//4th
#include<stdio.h>
void fun(int arr[])
{
  int i;
  int arr_size = sizeof(arr)/sizeof(arr[0]);
  printf("%d\n",arr_size);
  for (i = 0; i < arr_size; i++)
      printf("%d ", arr[i]);
}
 
int main()
{
  int i;
  int arr[4] = {10, 20 ,30, 40};
  fun(arr);
  return 0;
}
//  my answer is nothing but it is showing 10
//5th
#include<stdio.h> 
void f(int *p, int *q) 
{ 
  p = q; 
  *p = 2; 
} 
int i = 0, j = 1; 
int main() 
{ 
  f(&i, &j); 
  printf("%d %d n", i, j); 
  getchar(); 
  return 0; 
}
// my answer is 2 2 but answer is 0 2
//6th
int f(int x, int *py, int **ppz) 
{ 
  int y, z; 
  **ppz += 1; 
   z  = **ppz; 
  *py += 2; 
   y = *py; 
   x += 3; 
   return x + y + z; 
} 
   
void main() 
{ 
   int c, *b, **a; 
   c = 4; 
   b = &c; 
   a = &b; 
   printf("%d ", f(c, b, a)); 
   return 0;
} 
//  my answer is 18 but gfg answer is 19