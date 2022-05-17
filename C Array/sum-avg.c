// Write a program that reads number & display their sum and average 

#include<stdio.h>
int main ()
{
int a[10],sum=0,i,n;
printf("How many numbers :");
scanf("%d",&n);
 for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
 for(i=0;i<n;i++)
  {
    sum=sum+a[i];
  }
  printf("The sum is =%d\n",sum);
  printf("Average is =%.2f\n",(float)sum/n);
 
  return 0;

}