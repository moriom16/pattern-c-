//input: 4
//output:
// 1
// 1 2
// 1 2 3
// 1 2 3 4
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter number: ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col< =row; col++)
            printf("%d ",col);  //to print col number
          //printf("%d ",row);  //to print row number
        printf("\n");
    }
}
