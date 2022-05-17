// Triangle Star Pattern 

#include<stdio.h>
int main ()
{
 int n,row,col,count=0;
 printf("Enter a number :");
 scanf("%d",&n);
  for(row=1;row<=n;row++)
     {
       for (col=1;col<=row;col++)
         {
           if(row==n || col==1 || row==col)
               printf("*");

            else  
               printf(" ");   
         }

         printf("\n");
     }
 return 0;
}       