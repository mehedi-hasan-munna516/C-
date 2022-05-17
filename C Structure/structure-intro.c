#include<stdio.h>

  //  global structure 

  struct Person 
  {
      int age;
      float salary ;
  };
 
 int main()
{
 struct Person person1,person2;
 person1.age=24;
 person1.salary=12570.55;

 printf("Person 1:\n");
 printf("Age=%d\n",person1.age);
 printf("Salary=%.2f",person1.salary);

 person2.age=228;
 person2.salary=1223570.55;

 printf("\nPerson 2:\n");
 printf("Age=%d\n",person2.age);
 printf("Salary=%.2f",person2.salary);

 return 0;
}
