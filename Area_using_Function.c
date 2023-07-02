#include<stdio.h>
void area(double b,double h)
{
    double result=0.5*b*h;
     printf("%lf",result);
}
int main()
{
    double base,height,result;
    scanf("%lf %lf",&base,&height);
    area(base,height);

}
