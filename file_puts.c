#include<stdio.h>
int main()
{
    FILE *File;
    char name[100];
   File=fopen("test2.txt","a");

   if(File==NULL)
    printf("File does not exist: \n");
   else
   {
       printf("Enter your data: \n");
       printf("\n");
       gets(name);
       fputs(name,File);
       fclose(File);
   }
}
