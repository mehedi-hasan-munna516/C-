#include<stdio.h>
int main()
{
 FILE *file;
 char name[50];
 file=fopen("munna.txt","w");
 if(file==NULL)
   {
       printf("File doesn't exist");
   }
 else 
 {
     printf("File is opened\n");
     printf("Enter name :");
     gets(name);

     fputs(name,file);
     fputs("\n",file);
     printf("File is written successfully."); 
     fclose(file);
 }
 return 0;   
}