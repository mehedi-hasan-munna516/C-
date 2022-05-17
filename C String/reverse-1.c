#include<stdio.h>
#include<string.h>
int main ()
{
 char a[50],b[50];
 printf("Enter a string :");
 gets(a);
 int i=0,len=0,j;

 while(a[i]!='\0')
     {
         i++;
         len++;
     }
 for(j=0,i=len-1;i>=0;i--,j++)
   {
       b[j]=a[i];
   }
 b[j]='\0';
 printf("A=%s\n",a);
 printf("Reverse of A=%s\n",b);

 return 0;
}

