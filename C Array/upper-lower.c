#include<stdio.h>
int main ()
{
 int A[3][3],row,col,uppersum=0,lowersum=0;

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
 
 //Sum of upper & lower elements

 for(row=0;row<3;row++)
    {
       for(col=0;col<3;col++)
         {
             if(row<col)
              {
                 uppersum=uppersum + A[row][col];
              } 
             if(row>col)
              {
                 lowersum=lowersum + A[row][col];
              }          
         }
    }    
 printf("\nSum of upper triangle elements=%d\n",uppersum);
 printf("\nSum of lower triangle elements=%d",lowersum);

 
 return 0;    
}