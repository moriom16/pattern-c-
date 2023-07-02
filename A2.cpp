#include<stdio.h>
int main()
{
    int num1,num2,n1,n2,temp,rem,GCD,n,i;

    scanf("%d",&n);

    for(i=0;i<=n;i++)
    {
    printf("Enter two number: ");
    scanf("%d %d",&num1,&num2);

    n1=num1;
    n2=num2;

    while(n2!=0)
    {
        rem=n1%n2;
        n1=n2;
        n2=rem;
    }
    GCD=n1;
    printf("GCD= %d",n1);

    printf("\n");

    }
}
