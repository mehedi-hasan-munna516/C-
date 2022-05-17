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
 
 if(person2.age==person3.age && person2.salary==person3.salary)
    printf("Person2 is equal to person3 ");
 else 
    printf("Person2 is not equal to person3");

 return 0;      
}