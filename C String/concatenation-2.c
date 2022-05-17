#include<stdio.h>
#include<string.h>
int main()
{
 char a[50],b[50];
 printf("Enter a string :");
 gets(a);
 printf("Enter a string :");
 gets(b);
 strcat(a,b);
 printf("A=%s\n",a);
 return 0;
}