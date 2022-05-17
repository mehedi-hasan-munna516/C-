#include<stdio.h>
int main()
{
int n,sum=0,i;
printf("Enter the last number of digit :");
scanf("%d",&n);

for(i=1;i<=n;i++)
  {
    printf("%d  ",i);
      sum=sum+i;
  }    
printf("\nsum = %d\n",sum);

return 0;
}