#include<stdio.h>
int main ()
{
 int A[3][3],row,col,sum=0;

 //Scanning mattrix 

  printf("Enter the elements for mattrix A.\n");
 for(row=0;row<3;row++) 
     {
        for(col=0;col<3;col++)
           {
               printf("A[%d][%d]= ",row,col);
               scanf("%d",&A[row][col]);
           }
     }

 // Printing mattrix 
 
 printf("\nEntered mattrix= \n");
 for(row=0;row<3;row++) 
     {
        for(col=0;col<3;col++)
           {
               printf("%d ",A[row][col]);
           }
        printf("\n");   
     }
 
 //Sum of diogonal elements

  printf("Diagonal elements are=");
 for(row=0;row<3;row++)
    {
       for(col=0;col<3;col++)
         {
             if(row==col)
                {
                  printf("%d ",A[row][col]);
                sum=sum + A[row][col]; 
                }            
         }
    }    
 printf("\nsum of diagonal elements =%d",sum);

 return 0;    
}