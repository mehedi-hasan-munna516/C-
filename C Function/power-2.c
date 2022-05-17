#include<stdio.h>
 void calculatePow(double base,double exp)
   {
     double result=1,i;
     for(i=1;i<=exp;i++)
         {
         result=result*base;
         }
       printf("%.2lf\n",result);
   }
 int main()
 {
 double base,exp;   
 printf("Enter base :");
 scanf("%lf",&base);

 printf("Enter Exponant :");
 scanf("%lf",&exp);

 calculatePow(base,exp);

 return 0;
 }