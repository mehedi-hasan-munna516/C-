#include<stdio.h>
 double triangle(double b,double h)
  {
      return 0.5 * b * h;
  }
int main ()
{
 double base,height;
 printf("Enter base :");
 scanf("%lf",&base);
 printf("Enter height :");
 scanf("%lf",&height);
 double area=triangle(base,height);
 printf("The area of triangle is=%.2lf\n",area);

 return 0;
}
 