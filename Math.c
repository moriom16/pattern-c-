//display the value of Round,Truncate,Ceil,Floor,log(),exp(),log10(),sin(),cos()...

#include<stdio.h>
#include<math.h>
int main()
{
    double x,result;
    printf("Enter a number: ");
    scanf("%lf",&x);

  //  result=abs(x);
  //  printf("%d\n",result);

  // result=sqrt(x);
  // printf("lf\n",result);

    result=round(x);
   printf("%lf\n",result);

    result=trunc(x);
   printf("%lf\n",result);

    result=ceil(x);
   printf("%lf\n",result);

    result=floor(x);
   printf("%lf\n",result);

    result=log(x);
   printf("%lf\n",result);

    result=exp(x);
   printf("%lf\n",result);

    result=log10(x);
   printf("%lf\n",result);

    result=sin(x);
   printf("%lf\n",result);

    result=cos(x);
   printf("%lf\n",result);





}
