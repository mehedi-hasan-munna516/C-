#include<stdio.h>
int main ()
{
 char a[50]="My name is ";
 char b[50]="Mehedi Hasan Munna";
 int i=0,j=0,len=0;
 while(a[i]!='\0')
     {
         i++;
         len++;
     }
 while(b[j]!='\0')
     {
      a[len+j]=b[j];
      j++;
     }
 printf("Concatenation =%s",a);

 return 0;
}