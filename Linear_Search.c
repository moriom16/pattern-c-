#include<stdio.h>
int main()
{
    int a[]={2,5,56,55,3,7,15,17},i,value,position=-1;
    printf("Enter value: ");
    scanf("%d",&value);


    for(i=0;i<=8;i++)
   {
       if(value==a[i])
       {
           position=i+1;
           break;
       }

   }
   if(position==-1)
    printf("Not found");
   else
    printf("%d is in position %d",value,position);

}
