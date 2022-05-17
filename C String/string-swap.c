#include<stdio.h>
#include<string.h>
int main()
{
 char a[50],b[50],temp[50];
 printf("Enter A :");
 gets(a);
 printf("Enter B :");
 gets(b);

 printf("\nBefore swaping.\n");
 printf("A=%s\n",a);
 printf("B=%s",b);

 strcpy(temp,a);
 strcpy(a,b);
 strcpy(b,temp),
 
 printf("\n\nAfter swaping.\n");
 printf("A=%s\n",a);
 printf("B=%s",b);

 return 0;
}