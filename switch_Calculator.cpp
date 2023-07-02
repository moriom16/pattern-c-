#include<stdio.h>
int main()
{
    char op;
    double num1,num2;

    printf("Enter an operator (+ - * / ):  ");
    scanf("%c",&op);

    printf("Enter two number: ");
    scanf("%lf %lf",&num1,&num2);

switch(op)
{
   case '+':
       {
           printf("%lf + %lf =%.2lf",num1,num2,num1+num2);
           break;
       }

    case '-':
      {
       printf("%lf - %lf =%.2lf",num1,num2,num1-num2);
       break;
      }

    case '*':
       {
           printf("%lf * %lf =%.2lf",num1,num2,num1*num2);
           break;
       }

    case '/':
       {
           printf("%lf / %lf =%.2lf",num1,num2,num1/num2);
           break;
       }

    default:
        printf("Invalid");
}

}
