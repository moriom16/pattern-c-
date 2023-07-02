#include<stdio.h>
int main()
{
    FILE *File;
    char address[100];
    int age;

    File=fopen("test3.txt","w");

   if(File==NULL)
    printf("File does not exist: \n");
   else
   {
       printf("Enter your address: \n");
       gets(address);
       printf("Enter your age: \n");
       scanf("%d",&age);

       fprintf(File,"%s,%d\n",address,age);
       fclose(File);
   }
}

