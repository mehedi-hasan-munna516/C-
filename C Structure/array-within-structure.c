#include<stdio.h>
  struct Person 
   {
      char name[100]; 
      int age;
      float salary;
   };
  
 int main()
{
 struct Person A[4];
 int i;
 for(i=0;i<4;i++)
    {
       printf("Enter information for person %d-\n",i+1);
       printf("Enter name :");
       fflush(stdin);
       gets(A[i].name);
       printf("Enter age :");
       scanf("%d",&A[i].age);
       printf("Enter salary :");
       scanf("%f",&A[i].salary);
    }

 for(i=0;i<4;i++)
    {
       printf("\n\nInformation of person %d-\n",i+1);
       printf("Name :%s\n",A[i].name);
       printf("Age :%d\n",A[i].age);
       printf("Salary :%.2f\n",A[i].salary);
    }    

 return 0;      
}