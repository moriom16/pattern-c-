
#include<stdio.h>
int main()
{
    int array1[100],array2[100],i,n;
    printf("How many numbers: ");
    scanf("%d",&n);

    printf("\narray1[i]: ");
    for(i=0;i<n;i++)
    {
        scanf("%d",&array1[i]);
    }

     for(i=0;i<n; i++)
    {
        array2[i]=array1[i];
    }



    printf("\narray2[i]: ");
    for(i=0;i<n;i++)
    {
        printf(" %d",array2[i]);
    }
}
