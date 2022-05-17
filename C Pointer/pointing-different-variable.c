#include<stdio.h>
int main()
{
 int x=23,y=40,z=56;
 int *p;
 p=&x;
 printf("X=%d\n",*p);
 p=&y;
 printf("Y=%d\n",*p);
 p=&z;
 printf("Z=%d\n",*p);

 return 0;
}