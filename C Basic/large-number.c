#include<stdio.h>
int main ()
{
int x,y;
printf("Enter a number :");
scanf("%d",&x);
printf("Enter a number :");
scanf("%d",&y);
if (x>y)
      printf("Large number is =%d\n",x);

else if (x<y)
      printf("Large number is =%d\n",y);

else 
       printf("The number is equal ");      

return 0;            


}