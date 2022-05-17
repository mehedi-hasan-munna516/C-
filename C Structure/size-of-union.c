#include<stdio.h>
 union test1
 {
   int x,y;
 };
 union test2
 {
     float a;
     char ch;
 };
 union test3
 {
     double d;
     char T[20];
 };
 struct test4
 {
     int i;
     double t;
 };
int main()
{
 union test1 t1;
 union test2 t2;
 union test3 t3;
 struct test4 t4;

 printf("Size of test 1=%d\n",sizeof(t1));
 printf("Size of test 2=%d\n",sizeof(t2));
 printf("Size of test 3=%d\n",sizeof(t3));
 printf("Size of test 4=%d\n",sizeof(t4));

 return 0;   
}