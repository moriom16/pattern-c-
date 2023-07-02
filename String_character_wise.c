#include<stdio.h>
int main()
{
    char s[]="tasnia chowdhury";
    char s1[100];
    int i=0,length;

    while(s[i]!='\0')
    {
        printf("%c\n",s[i]);
        i++;
    }
    length=strlen(s);      //string length detect korar jonno
    printf("length= %d\n",length);


    strcpy(s1,s);       //string copy korar jonno
    printf("copied= %s\n",s1);

    strcat(s," tasnu"); //String concatation er jonno strcat function
    printf("concated= %s\n",s);

    int d=strcmp(s,s1);
    if(d==0)
    {
        printf("Strings are equal");
    }
    else
        printf("Not equal");


    strrev(s1);         //string reverse korar jonno
    printf("\nreversed=%s",s1);

}
