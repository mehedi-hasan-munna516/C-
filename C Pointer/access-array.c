#include<stdio.h>
int main()
{
 int a[]={10,20,30,40,50,60};
 int *p,i;
 p=&a[0];
 for(i=0;i<6;i++)
    {
        printf("%d\n",*p);
        p++;
    }

 return 0;   
}