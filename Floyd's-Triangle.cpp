#include<stdio.h>
int main()
{
    int count=0,n,row,col;
    printf("Enter N: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",++count);

        }
        printf("\n");
    }
}


