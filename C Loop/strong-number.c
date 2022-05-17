#include<stdio.h>
int main()
  {
   int a,temp,r,sum=0,fact,i;
    printf("Enter a number :");
    scanf("%d",&a);
    temp=a;
    while(temp!=0)
        {
          r=temp%10;
          fact=1;
            for(i=1;i<=r;i++)
                {
                  fact=fact*i;
                }
          sum=sum+fact;
          temp=temp/10;
        }
     if(sum==a)
        printf("Strong Number");
      else 
         printf("Not strong Number ");    

   return 0;        
  }
