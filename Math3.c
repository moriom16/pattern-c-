//display the power of x to the power y

#include<stdio.h>
#include<math.h>
int main()
{
    int x,y,result;
    printf("Enter the number of X & Y: ");
    scanf("%d %d",&x,&y);

    result=pow(x,y);
    printf("%d\n",result);

}
