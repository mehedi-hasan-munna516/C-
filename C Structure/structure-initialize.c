#include<stdio.h>
  struct Person 
   {
      int age;
      float salary;
   };
  
 int main()
{
 struct Person person1={12,12367.78};
 struct Person person2,person3;
 
 person2.age=45;
 person2.salary=56780;
  
 person3=person2;
 
 printf("\nPerson 1:\n");
 printf("Age=%d\n",person1.age);
 printf("Salary=%.2f",person1.salary);


 printf("\n\nPerson 2:\n");
 printf("Age=%d\n",person2.age);
 printf("Salary=%.2f",person2.salary);

 printf("\n\nPerson 3:\n");
 printf("Age=%d\n",person3.age);
 printf("Salary=%.2f",person3.salary);

 return 0;
}
