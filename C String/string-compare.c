#include<stdio.h>
#include<string.h>
int main()
{
 char a[50],b[50];
 printf("Enter a string :");
 gets(a);
 printf("Enter a string :");
 gets(b);
 int c= strcmp(a,b);
 if(c==0)
    printf("\nStrings are equal.");
  else 
    printf("\nStrings are not equal.");

 return 0;

}