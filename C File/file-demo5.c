
#include<stdio.h>
int main()
{
 FILE *file;
 char ch[40];
 file=fopen("munna.txt","r");
 if(file==NULL)
   {
       printf("File doesn't exist");
   }
 else 
 {
     printf("File is opened\n");
     while(!feof(file))
     {
          fgets(ch,40,file);
          printf("%s\n",ch);
     }
     
     fclose(file);
 }
 return 0;   
}