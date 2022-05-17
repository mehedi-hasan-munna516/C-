#include<stdio.h>
int main ()
{
int a;
for(a=1 ; a<15 ; a++)
   {
    if(a%2==0)
       continue;              //bypass 
       printf("%d\t",a);
    if(a==11)
       break;                 // exit 

   }
return 0;

}
