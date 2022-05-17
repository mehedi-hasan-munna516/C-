#include<stdio.h>
 enum days_of_week
 {
    sun,mon,tue,wed,thu,fri,sat
 };
int main() 
 {
    enum days_of_week day1,day2;
    day1=mon;
    day2=fri;
    int dif=day2-day1;
    printf("Day difference=%d\n",dif);

 return 0;   
 }