//  1^2 X 2^2 X 3^2 X ....... X n^2

#include<stdio.h>
int main ()
{
int n,i,result=1;
printf("Enter a number :");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
     result=result *i*i;
    }
printf("Result=%d",result);
return 0;

}