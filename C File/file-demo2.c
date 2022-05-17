#include<stdio.h>
#include<string.h>
int main()
{
 FILE *file;
 char name[100];
 printf("Enter name :");
 gets(name);
 int l=strlen(name);
 int i;
 file=fopen("munna.txt","w");
 if(file==NULL)
   {
       printf("File doesn't exist");
   }
 else 
 {
     printf("File is opened\n");
      for(i=0;i<l;i++)
        {
            fputc(name[i],file);
        }
     printf("File is written successfully.");   
     fclose(file);
 }
 return 0;   
}