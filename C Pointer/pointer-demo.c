#include<stdio.h>
int main()
{
 int x=5;
 int *p;
 p=&x;

 printf("Value of x=%d\n",x);
 printf("Address of x=%d\n",&x);
 printf("Value of Pointer=%d\n",*p);
 printf("Address of pointer=%d\n",&p);
 printf("Value of P=%d\n",p);
  
 return 0;   
}