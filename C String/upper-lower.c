#include<stdio.h>
#include<string.h>
int main ()
{
 char a[50];
 printf("Enter a string :");
 gets(a);

 strupr(a);
 printf("Upper string = %s\n",a);

 return 0;

}