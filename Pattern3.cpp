//Input: 3
//Output:
//1
//0 0
//1 1 1
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter N= ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=row; col++)
        {
            printf("%d ",row%2);
         // printf("%d ",col%2); /*Input: 3
        }                        //Output:
                                 //       1
        printf("\n");            //       1 0
    }                            //       1 0 1
}
