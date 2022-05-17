#include<stdio.h>
int main()
{
while(1){ 

int a,i;
printf("Enter a number :");
scanf("%d",&a);
for(i=1 ; i<=10 ; i++)
   {
   printf("%d X %d = %d\n",a,i,a*i);
   } 

  }
return 0 ;
}