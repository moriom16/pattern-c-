#include<stdio.h>
int main()
{
    int a,b,num1,num2,result;
    printf("Enter two number:  ");
    scanf("%d %d",&a,&b);

    num1=++a;
    num2=b++;
    printf(" num1=%d\n num2=%d\n",num1,num2);

    num1=a++;
    num2=++b;
    printf(" num1=%d\n num2=%d\n",num1,num2);

     num1=a--;
    num2=b--;
    printf(" num1=%d\n num2=%d\n",num1,num2);

     num1=--a;
    num2=--b;
    printf(" num1=%d\n num2=%d\n",num1,num2);


}
