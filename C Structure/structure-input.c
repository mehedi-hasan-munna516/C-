#include<stdio.h>
  struct Person 
  {
      int age;
      float salary ;
  };

 int main()
{
 struct Person person1,person2;

 printf("Enter elements for person 1.\n");
 printf("Enter age :");
 scanf("%d",&person1.age);
 printf("Enter salary :");
 scanf("%f",&person1.salary);
 printf("Person 1:\n");
 printf("Age=%d\n",person1.age);
 printf("Salary=%.2f",person1.salary);


 printf("\n\nEnter elements for person 2.\n");
 printf("Enter age :");
 scanf("%d",&person2.age);
 printf("Enter salary :");
 scanf("%f",&person2.salary);
 printf("Perosn 2:\n");
 printf("Age=%d\n",person2.age);
 printf("Salary=%.2f",person2.salary);

 return 0;
}
