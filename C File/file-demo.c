#include<stdio.h>
int main()
{
 FILE *file;
 file=fopen("munna.txt","w");
 if(file==NULL)
   {
       printf("File doesn't exist");
   }
 else 
 {
     printf("File is opened");
     fclose(file);
 }
 return 0;   
}