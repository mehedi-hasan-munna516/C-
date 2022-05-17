#include<stdio.h>
int main ()
{
 int A[10][10],transpose[10][10],row,col,m,n;
 printf("Enter the number of rows & cols :");
 scanf("%d %d",&m,&n);

 //Scaning mattrix A 

  printf("\nEnter the elements of mattrix A.\n");
 for(row=0;row<m;row++)
     {
         for(col=0;col<n;col++)
            {
                printf("A[%d][%d]=",row,col);
                scanf("%d",&A[row][col]);
            }
     }

 // Transpose mattrix A

  for(row=0;row<m;row++)
     {
         for(col=0;col<n;col++)
            {
               transpose[col][row]=A[row][col];
            }    
     }   

 // Printing mattrix A

    printf("\nA =\n");
  for(row=0;row<m;row++)
     {

         for(col=0;col<n;col++)
            {
               printf("%d ",A[row][col]);
            }
        printf("\n");      
     }   

  // Printing transpose mattrix

  printf("\nTranspose matrix=\n");
 for(row=0;row<n;row++)
     {
         for(col=0;col<m;col++)
            {
                printf("%d ",transpose[row][col]);
            }
         printf("\n");
         
     }


 return 0;

}