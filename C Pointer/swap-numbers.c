#include<stdio.h>
int main()
{
 int a,b,temp;
 printf("Enter A:");
 scanf("%d",&a);
 printf("Enter B:");
 scanf("%d",&b);
 int *p1,*p2;
 p1=&a;
 p2=&b;

 // Swaping two numbers

 temp=*p1;
 *p1=*p2;
 *p2=temp;

 printf("\nAfter Swaping -\n");
 printf("A= %d\n",a);
 printf("B= %d\n",b);

 return 0;
}