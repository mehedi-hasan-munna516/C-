#include<stdio.h>
int main()
{

float x;
printf("Enter your number :");
scanf("%f",&x);  
if (x>100 || x<0)
      printf("Invalid mark");
else if (x>=80  && x<=100)
      printf("A+");
else if (x>=70 && x<=79)
      printf("A");
else if (x>=60  && x<=69)
      printf("A-");
else if (x>=50  && x<=59)
      printf("B");
else if (x>=40  && x<=49)
      printf("C");
else if (x>=33  && x<=39)
      printf("D");  
else 
      printf("Fail");

return 0;           

}