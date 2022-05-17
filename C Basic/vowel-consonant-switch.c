#include<stdio.h>
int main()
{
char X;
printf("Enter a letter  :");
scanf("%c",&X);
switch(X)
{
case 'a':
case 'e':
case 'i':
case 'o':
case 'u':
case 'A':
case 'E':
case 'I':
case 'O':
case 'U':
    printf("Vowel\n");
    break;
default :
    printf("Consonant\n");      
}

return 0;

}