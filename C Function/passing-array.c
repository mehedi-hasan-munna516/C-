#include<stdio.h>
 void display(int x[])
   {
       int i,n;
       for(i=0;i<7;i++)
          {
              printf("%d ",x[i]);
          }
   }
 int main() 
 {
 int num[]={10,20,30,40,50,60,70};
 
 display (num);

 return 0;
} 