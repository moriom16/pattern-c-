#include<stdio.h>
int main()
{
    FILE *File;
    char ch[100];

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
            fgets(ch,File);
            printf("%s",ch);
        }
        fclose(File);
    }
}

