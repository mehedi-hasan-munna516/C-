// 1*2*3 + 2*4*5 + 3*6*7+.......+n1*n2*n3

#include<stdio.h>
int main ()
{
int n1,n2,n3,sum=0,a=1,b=2,c=3;
printf("Enter n1 , n2 & n3 :");
scanf("%d %d %d",&n1,&n2,&n3);
printf(" 1*2*3 + 2*4*5 + 3*6*7+.......+%d*%d*%d",n1,n2,n3);
while(a<=n1 && b<=n2 && c<=n3)
    {
      sum=sum+a*b*c;
      a=a+1;
      b=b+2;
      c=c+2;
      
    }
printf("= %d\n",sum);
return 0;


}