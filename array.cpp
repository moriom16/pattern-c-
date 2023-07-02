#include<stdio.h>
int main()
{
    int a[1000],n,i,max,min=0,sum=0;
    printf("How many numbers in array: ");
    scanf("%d",&n);

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        printf("%d ",a[i]);
    }

     max=a[0];
     for(i=1;i<n;i++)
    {
       if(max<a[i])
        max=a[i];
    }
       printf("\nmax=%d\n",max);


     min=a[0];
     for(i=1;i<n;i++)
    {
       if(min>a[i])
        min=a[i];
    }
       printf("min= %d\n",min);


     for(i=0;i<n;i++)
    {
        sum=sum+a[i];

    }
     printf("Sum:%d\n",sum);
     printf("Average: %.2lf",(float)sum/n);

}
