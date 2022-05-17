#include<stdio.h>
int main()
{
int choice;
float X,Y;
printf("Temperature conversion menu :\n");
printf("1. Celsious to Fahrenhite.\n");
printf("2.Fahrenhite to Celsius.\n");
printf("Enter your choice :");
scanf("%d",&choice);
switch(choice)
{
   case 1:
        {
        printf("Enter Celsius temprature :\n");
        scanf("%f",&X);
        Y=(1.8*X)+32;
        printf("The temperature of Fahrenhite is =%.2f\n",Y);     
        }
        break;
    case 2:
        {
        printf("Enter Fahrenhite temprature :\n");
        scanf("%f",&X);
        Y=(X-32)/1.8;
        printf("The temperature of Celsius is =%.2f\n",Y);
        }
        break;
    default:
        printf("Not a correct option\n");
}

return 0;

}