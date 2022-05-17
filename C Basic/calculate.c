#include<stdio.h>
int main()
{
double X,Y;
char op;

printf("Enter operator(+,-,*,/) : \n");
scanf("%c",&op);
printf("Enter two numbers :\n");
scanf("%lf %lf",&X,&Y);
switch(op)
{
   case '+':
      {
       printf("The sum is = %.2lf\n",X+Y);
       break;
      }
    case '-':
      {
       printf("The sub is = %.2lf\n",X-Y);
       break;
      }
      case '*':
      {
       printf("The multiple is  = %.2lf\n",X*Y);
       break;
      }
      case '/':
      {
       printf("The devide is  = %.2lf\n",X/Y);
       break;
      }
    default:
    printf("Not a valid option");
}
return 0;
}