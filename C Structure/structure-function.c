#include<stdio.h>
#include<string.h>
 struct Person
 {
     char name[100];
     int age;
     float salary;
 };
 void display(struct Person T)
 {
  printf("\nName :%s\n",T.name);
  printf("Age :%d\n",T.age);
  printf("Salary :%f\n",T.salary);
 }  
int main()
{
 struct Person A1,A2;

 strcpy(A1.name,"Munna");
 A1.age=23;
 A1.salary=34987.56;
 display(A1);
 
 strcpy(A2.name,"Anis");
 A2.age=20;
 A2.salary=21500;
 display(A2);
 

 return 0;   
}