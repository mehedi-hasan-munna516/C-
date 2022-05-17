#include<stdio.h>
int main ()
{
char ch;
printf("Enter a letter :");
scanf("%c",&ch);
if (ch>='A'  &&  ch<='Z')
    printf("Capital letter\n");
else if (ch>='a'  &&  ch<='z')
    printf("Small letter\n");
else 
    printf("Not a letter\n");     

return 0;

}