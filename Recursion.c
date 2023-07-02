#include<stdio.h>

int fact(int n)
{
    //int i,fact;
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int main()
{
    int num;
    int result=fact(num);
    scanf("%d",&num);
    //fact(num);
    printf("%d",result);
}
