#include<stdio.h>
int sum(int a,int b,int c)
{
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",a+b+c);
}

int sub(int a,int b,int c)
{
    scanf("%d %d %d",&a,&b,&c);
    printf("%d\n",a-b-c);
}


int main()
{
    int a,b,c;
    sum(a,b,c);
    sub(a,b,c);
}
