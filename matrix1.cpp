//2D Array Addition & Subtraction
#include<stdio.h>
int main()
{
    int A[100][100],B[100][100],c[100][100],i,j,row,col;
    printf("How long row & column: ");
    scanf("%d%d",&row,&col);

    printf("Enter input for A=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
             printf("A[%d][%d]= ",i,j);
             scanf("%d",&A[i][j]);
        }
        printf("\n");


    }


    //printing B
    printf("Enter input for B=\n");
     for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
             printf("B[%d][%d]= ",i,j);
             scanf("%d",&B[i][j]);
        }
        printf("\n");


    }

     printf("\nA= ");
    for(i=0;i<row;i++)
    {
        printf("\t\n");
        for(j=0;j<col;j++)
        {
            printf("%d ",A[i][j]);
        }

    }
    printf("\n");


    printf("\nB= ");
    for(i=0;i<row;i++)
    {
        printf("\t\n");
        for(j=0;j<col;j++)
        {
            printf("%d ",B[i][j]);
        }

    }
    printf("\n");



    //Addition
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           c[i][j]= A[i][j] + B[i][j];
        }

    }
     printf("\n");
     printf("A+B=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           printf("%d ",c[i][j]);
        }
       printf("\t\n");


    }



    //subtraction
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           c[i][j]= A[i][j] - B[i][j];
        }

    }

     printf("\n");
     printf("A-B=\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
           printf("%d ",c[i][j]);
        }
       printf("\t\n");



    }
}
