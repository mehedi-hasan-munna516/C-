#include<stdio.h>
int main ()
{
 char a[50];
 printf("Enter a word :");
 gets(a);
 int i=0;
 while(a[i]!='\0')
    {
        printf("%c\n",a[i]);
        i++;
    }

 return 0;

}