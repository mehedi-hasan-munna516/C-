#include<stdio.h>
int main()
{
 FILE *file;
 char name[50];
 int age;
 file=fopen("munna.txt","a");
 if(file==NULL)
   {
       printf("File doesn't exist");
   }
 else 
 {
     printf("File is opened\n");
     printf("Enter name :");
     gets(name);
     printf("Enter your age :");
     scanf("%d",&age);

     fprintf(file,"Name=%s, Age=%d\n",name,age);
     printf("File is written successfully."); 
     fclose(file);
 }
 return 0;   
}