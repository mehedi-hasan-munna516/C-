#include<stdio.h>
int main()
{
 int a,b,sum;
 printf("Enter two numbers:");
 scanf("%d %d",&a,&b);
 int *p1,*p2;
 p1=&a;
 p2=&b;
 sum=*p1 + *p2;
 printf("Sum =%d\n",sum);
 
 return 0;
}