#include<stdio.h>
int main()
{
 FILE *file;
 char name[50];
 int age,pnumber,i,n;
 file=fopen("student.txt","w");
 if(file==NULL)
    {
        printf("File doesn't exist.");
    }
 else
    {
        printf("File is opened.\n");
        printf("Enter number of students :");
        scanf("%d",&n);
        for(i=1;i<=n;i++)
            {
                printf("Enter student name :");
                scanf("%s",&name);

                printf("Enter students age :");
                scanf("%d",&age);

                printf("Enter students phone number:");
                scanf("%d",&pnumber);
                fprintf(file,"\n%s\t\t%d \t%d",name,age,pnumber);
            }
        fclose(file);
    }

 return 0;
}