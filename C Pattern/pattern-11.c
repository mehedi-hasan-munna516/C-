// Diamond Pattern

#include<stdio.h>
int main ()
{
int n,row,col,space;
printf("Enter  a number :");
scanf("%d",&n);
  // Upper Part
for (row=1;row<=n;row++)
  { 
     for(space=1;space<=n-row;space++)
      {
        printf(" ");
      }
     for(col=1;col<=row;col++)
      {
        printf("* ");
      }
     printf("\n");

  }
  // Lower Part

 for (row=n-1;row>=1;row--)
  { 
     for(space=1;space<=n-row;space++)
      {
        printf(" ");
      }
     for(col=1;col<=row;col++)
      {
        printf("* ");
      }
     printf("\n");
  }
return 0;
}