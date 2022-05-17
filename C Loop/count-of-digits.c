#include<stdio.h>
int main ()
{
int num,count=0;
printf("Enter an integer :");
scanf("%d",&num);

while(num!=0)
   {
    num=num/10;
    count++;

   }
printf("Total numbers of digit = %d",count);
return 0;


}