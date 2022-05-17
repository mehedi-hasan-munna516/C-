#include<stdio.h>
int main()
{
 FILE *file;
 char ch[50];
 file=fopen("munna.txt","r");
 if(file==NULL)
   {
       printf("File doesn't exist.");
   }
 else
   {
       printf("File is opened.\n");
       fscanf(file,"%s",&ch);
       printf("%s\n",ch);
       fclose(file);
   }

 return 0;

}