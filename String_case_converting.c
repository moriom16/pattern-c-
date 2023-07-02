#include<stdio.h>
int main()
{
    char data[]="tasnia";
    int i,length=10;
    //scanf("%s",&data);
    //printf("%s",data);


    for(i=0;i<length;i++)
    {
        if(data[i]>=97 && data[i]<=122)
        {
            data[i]='A'+(data[i]-'a');
        }
    }printf("%s",data);
}
