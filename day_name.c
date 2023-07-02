#include<stdio.h>

int main()
{
   int day;
   scanf("%d",&day);

   int n=day%7;
   if(n==1)
    printf("Friday");

       else if(n==2)
    printf("Saturday");

      else if(n==3)
    printf("Sunday");

       else if(n==4)
    printf("Monday");

       else if(n==5)
    printf("Tuesday");

       else if(n==6)
    printf("Wednesday");

       else
    printf("Thursday");



}

