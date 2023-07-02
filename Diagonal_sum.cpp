#include<stdio.h>
int main()
{
    int A[100][100],row,col,i,j,sum=0;
    printf("Enter row & col: ");
    scanf("%d %d",&row,&col);

    for(i=0; i<row;i++)
    {
        for(j=0; j<col;j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&A[i][j]);
        }
    }

    printf("\nEntered Matrix: ");
     for(i=0;i<row;i++)
    {
        printf("\t\n");
        for(j=0; j<col; j++)
        {
            printf("%d ",A[i][j]);
        }
        printf("\n");
    }



    for(i=0; i<row;i++)
    {
        for(j=0; j<col;j++)
        {
            if(i==j)
               {
                printf("\nDiagonal element=%d ",A[i][j]);
                sum=sum+ A[i][j];

               }
        } //printf("\n%d",sum);


    }printf("\nDiagonal sum=%d",sum);

}
