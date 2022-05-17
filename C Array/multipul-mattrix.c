#include<stdio.h>
int main ()
{
 int first[10][10],second[10][10],result[10][10],r1,r2,c1,c2,row,col,k,sum=0;    
 printf("Enter rows & col for first mattrix :");
 scanf("%d %d",&r1,&c1);
 printf("Enter rows & col for second mattrix :");
 scanf("%d %d",&r2,&c2);
 while(c1!=r2)
     {
       printf("Error !!! Column of first mattrix is not eqqual to second mattrix.\n");
       printf("Enter rows & col for first mattrix : ");
       scanf("%d %d",&r1,&c1);
       printf("Enter rows & col for second mattrix : ");
       scanf("%d %d",&r2,&c2);
     }

 // Taking input for first mattrix

  printf("Enter elements for first mattrix .\n");
 for(row=0;row<r1;row++)
     {
        for(col=0;col<c1;col++)
         {
            printf("first[%d][%d]=",row,col);
            scanf("%d",&first[row][col]);
         }
     }

 // Taking input for second mattrix

 printf("\nEnter elements for second mattrix .\n");
 for(row=0;row<r2;row++)
     {
        for(col=0;col<c2;col++)
        {
            printf("second[%d][%d]=",row,col);
            scanf("%d",&second[row][col]);
        }
     }

  // Multipul the mattrix

  for(row=0;row<r1;row++) 
     {
        for(col=0;col<c2;col++)
           {
               for(k=0;k<c1;k++)
                 {
                     sum=sum + first[row][k] * second[k][col];
                 }
              result[row][col]=sum;
              sum=0;   
           }
     } 

 // Printing first mattrix  

 printf("\n\nFirst mattrix =\n");
 for(row=0;row<r1;row++)
     {
        for(col=0;col<c1;col++)
        {
            printf("%d ",first[row][col]);
        }
        printf("\n");
      }
 
 // Printing second mattrix  

 printf("\n\nSecond mattrix =\n");
 for(row=0;row<r2;row++)
     {
        for(col=0;col<c2;col++)
        {
            printf("%d ",second[row][col]);
        }
        printf("\n");
     }   

  // Printing Result mattrix  

 printf("\n\nResult mattrix =\n");
 for(row=0;row<r1;row++)
     {
        for(col=0;col<c2;col++)
        {
            printf("%d ",result[row][col]);
        }
        printf("\n");
     }   
     
 return 0;    
}