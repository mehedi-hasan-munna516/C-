#include<stdio.h>
#include<string.h>
int main()
{
 char a[50];
 printf("Enter a string :");
 gets(a);
 int len= strlen(a);
 printf("Length=%d\n",len); 

 return 0;
}