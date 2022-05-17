#include<stdio.h>
int main ()
{
int a,fact=1,i;
printf("Enter any positive number :");
scanf("%d",&a );
for(i=1 ; i<=a ; i++)
       {
        fact=fact*i;
    
       }
    printf("Factorial =%d",fact);
return 0;    

}