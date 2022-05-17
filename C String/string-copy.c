#include<stdio.h>
#include<string.h>
int main()
{
 char a[50],b[50];
 printf("Enter a string :");
 gets(a);
 strcpy(b,a);
 printf("A=%s\n",a);
 printf("B=%s",b);

 return 0;

}