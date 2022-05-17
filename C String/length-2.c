#include<stdio.h>
int main ()
{
 char a[50];
 int i=0,len=0;
 printf("Enter something :");
 gets(a);
 while(a[i]!='\0')
   {
       i++;
       len++;
   }
  printf("Length=%d\n",len);
 return 0;  

}