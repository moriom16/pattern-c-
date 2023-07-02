#include<stdio.h>
int main()
{
    char s1[]="TASNIA",s2[]="moriom",temp[100];

    strcpy(temp,s1);
    strcpy(s1,s2);
    strcpy(s2,temp);

    printf("\ns1=%s",s1);
    printf("\ns2=%s",s2);

    strupr(s1);             //swapping er poe s1=s2
    printf("\ns1=%s",s1);   //s2=s1

    strlwr(s2);
    printf("\ns2=%s",s2);

}
