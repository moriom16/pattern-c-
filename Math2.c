//display Absolute & Square_root,Square value of any number

#include<stdio.h>
#include<math.h>
int main()
{
    int x,result;
    printf("Enter a number: ");
    scanf("%d",&x);

    result=abs(x);
    printf("%d\n",result);

    result=sqrt(x);
    printf("%d\n",result);

    result=(x*x);
    printf("%d\n",result);
}
