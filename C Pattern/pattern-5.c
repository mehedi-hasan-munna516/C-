#include<stdio.h>
int main ()
{
int n,row,col,space;
printf("Enter  a number :");
scanf("%d",&n);
for (row=1;row<=n;row++)
  {
      // Printing space 
     for(space=1;space<=n-row;space++)
      {
        printf(" ");
      }
      // Printing number 
     for(col=1;col<=row;col++)
      {
        printf("%d",col);
      }
     printf("\n");

  }

return 0;
}