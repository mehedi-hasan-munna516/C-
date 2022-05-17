#include<stdio.h>
 void maximum(int x[])
   {
     int i;
     int max=x[0];
     for(i=0;i<7;i++)
         {
             if(max<x[i])
                max=x[i];
        }
        printf("Maximum =%d\n",max);
   }
 int main() 
 {
 int num[]={10,20,30,40,50,60,70};
 maximum (num);

 return 0;
} 