#include<stdio.h>
#include<string.h>
int main ()
{
 char a[50];
 printf("Enter a string :");
 gets(a);
 printf("A=%s\n",a);
 strrev(a);
 printf("Reverse=%s\n",a);

 return 0;
}