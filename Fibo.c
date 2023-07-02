#include<stdio.h>
int main()
{
    int n,i,fibo,first=0,second=1;
    printf("How many Fibonacci want to see: ");
    scanf("%d",&n);

    for(i=2;i<=n;i++)
    {

        fibo= (first+second);
        printf("%d ",fibo);
        first=second;
        second=fibo;
    }

}
