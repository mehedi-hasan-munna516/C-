#include<stdio.h>
int main()
{
 int row,col,NumberOfRows,NumberOfCols;
 int A[10][10],B[10][10],c[10][10] ;
 printf("Enter the number of rows & cols :");
 scanf("%d %d",&NumberOfRows,&NumberOfCols);

  // Scanning mattrix A

 printf("Enter elements for mattrix A.\n");
 for(row=0;row<NumberOfRows;row++)
   {
     for(col=0;col<NumberOfCols;col++)
        {
             printf("A[%d][%d]=",row,col);
             scanf("%d",&A[row][col]);
        }
        printf("\n");
   }
   // Scanning mattrix B  

 printf("\n\nEnter elements for mattrix B.\n");
 for(row=0;row<NumberOfRows;row++)
   {
     for(col=0;col<NumberOfCols;col++)
        {
             printf("B[%d][%d]=",row,col);
             scanf("%d",&B[row][col]);
        }
        printf("\n");
   }

  // Printing mattrix A  

   printf("A=");
 for(row=0;row<NumberOfRows;row++)
   {
      printf("\t");  
     for(col=0;col<NumberOfCols;col++)
        {
             printf("%d  ",A[row][col]);
        }
        printf("\n");
   }
   
  // Printing mattrix B 

   printf("\nB=");
 for(row=0;row<NumberOfRows;row++)
   {
      printf("\t");  
     for(col=0;col<NumberOfCols;col++)
        {
             printf("%d  ",B[row][col]);
        }
        printf("\n");
   }
 // Adding two matrix
  
 for(row=0;row<NumberOfRows;row++)
   {  
     for(col=0;col<NumberOfCols;col++)
        {
           c[row][col]=A[row][col] + B[row][col]; 
        }
   }
 // Printing mattrix C 

   printf("\nA + B=");
 for(row=0;row<NumberOfRows;row++)
   {
      printf("\t");  
     for(col=0;col<NumberOfCols;col++)
        {
             printf("%d  ",c[row][col]);
        }
        printf("\n");
   }
 return 0;

}