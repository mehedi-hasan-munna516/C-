#include<stdio.h>
int main()
{
int a, count =0,i;
printf("Enter any positive number :");
scanf("%d",&a);
for(i=2;i<a;i++)
    {
        if(a%i==0)
           {
               count++;
               break;
           }
    }
if(count==0)
    printf("Prime Number\n");
else 
    printf("Not a prime number\n ");
return 0;        

}