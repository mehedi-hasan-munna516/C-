#include<stdio.h>
int main ()
{
 int num[]={15,3,10,20,12,7,8};
 int value,pos=-1,i;
 printf("Enter the value :");
 scanf("%d",&value);
  for(i=0;i<7;i++)
     {
        if(value==num[i])
          {
               pos=i+1;
               break;
          }
     }
  if(pos==-1)
    printf("Item not found");
  else 
    printf("The position of value is %d",pos);

 return 0;     

}