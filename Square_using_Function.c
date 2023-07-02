#include<stdio.h>
int square(int num)
{
    return num*num;
}
int main()
{
    int num,result;
    scanf("%d",&num);
    result=square(num);
    printf("%d",result);
}
