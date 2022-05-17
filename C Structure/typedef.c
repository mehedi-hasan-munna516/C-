#include<stdio.h>
 struct shirt
 {
     char name[20];
     int price;
 };
int main()
{
  typedef struct shirt SHIRT;
  SHIRT s={"Easy",2500};
  printf("Shirt name =%s\n",s.name);
  printf("Shirt price=%d",s.price);

 return 0;
}