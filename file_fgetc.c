#include<stdio.h>
int main()
{
    FILE *File;
    char ch;

    File=fopen("test2.txt","r");
   // File=fopen("test3.txt","r");


    if(File==NULL)
    {
        printf("File does not exist");
    }
    else
    {
        printf("File opened\n");
        while(!feof(File))
        {
            ch=fgetc(File);
            printf("%c",ch);
        }
        fclose(File);
    }
}
