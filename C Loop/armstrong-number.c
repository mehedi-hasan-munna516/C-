#include<stdio.h>
int main ()
{
int initial,temp,sum=0,r,final,i;
printf("Enter initial number:");
scanf("%d",&initial);
printf("Enter  a final number :");
scanf("%d",&final);

for(i=initial;i<=final;i++)
  {
    temp=i;
    while(temp!=0)
       {
          r=temp%10;
          sum=sum+r*r*r;
          temp=temp/10;
       }
  
if(sum==i)
    printf("%d  ",i);   
sum=0;
  }
return 0;

}