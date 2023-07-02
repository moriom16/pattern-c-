#include<stdio.h>
int power(int base,int exp,int result)
{
    for(int i=1;i<=exp;i++)
    {
        result=result*base;

    }
}
int main()
{
    int base,exp,i,result=1;
    scanf("%d %d",&base,&exp);
    power(base,exp,result);
    printf("%d",result);
}
