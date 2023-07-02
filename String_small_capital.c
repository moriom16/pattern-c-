#include<stdio.h>
#include<conio.h>
int main()
{
    char data[100];
    int i,small,capital,other;

    printf("Enter your data= ");
    gets(data);

    i=small=capital=other=0;

    while(data[i]!='\0')
    {
        if(data[i]>=65 && data[i]<=90)
            capital++;
        else if(data[i]>=97 && data[i]<=122)
            small++;

        else
            other++;
            i++;

    }

     printf("Small letter=%d\n",small);
     printf("Capital letter=%d\n",capital);
     printf("Other=%d\n",other);

     getch();
}
