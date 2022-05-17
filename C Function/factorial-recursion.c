#include<stdio.h>
 int fact (int n)
    {
         if(n==1)
           return 1;
         else 
           return  n*fact(n-1); 
    }
 int main ()
 { 
 int result=fact(6);
 printf("Factorial of 6 = %d",result);

 return 0;
 }
 