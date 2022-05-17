#include<stdio.h>
int main ()
{
int n,row,col,space;
printf("Enter  a number :");
scanf("%d",&n);
for (row=n;row>=1;row--)
  {
      // Printing space 
     for(space=1;space<=n-row;space++)
      {
        printf(" ");
      }
      // Printing number 
     for(col=1;col<=row;col++)
      {
        printf("*");
      }
     printf("\n");

  }

return 0;

}