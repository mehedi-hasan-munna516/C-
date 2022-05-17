#include<stdio.h>
 union test
 {
     int x,y;
 };
int main()
{
 union test t1;

 t1.x=20;
 printf("T1.x=%d\n",t1.x);
 printf("T1.y=%d\n",t1.y);

 t1.y=40;
 printf("T1.x=%d\n",t1.x);
 printf("T1.y=%d\n",t1.y);

 return 0;
}

