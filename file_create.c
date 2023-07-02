#include<stdio.h>
int main()
{
    FILE *File;
    char name[]=" Hello";
    int i=0,length=0;
    length =strlen (name);

    File=fopen("test2.txt","r");

    if(File==NULL)
        printf("File does not exist");
    else
    {
        printf("File opened\n");
       while(name[i]!='\0')
        {
            i++;
            length;;
            fputc(name[i],File);
        }
        printf("File is written successfully");
        fclose(File);
    }

}
