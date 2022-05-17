//  1 X 2 X 3 X ...... X n

#include<stdio.h>
int main ()
{
int n,i,result=1;
printf("Enter a number :");
scanf("%d",&n);
for(i=1;i<=n;i++)
    {
        result=result*i;
    }
printf("Result =%d",result);

}