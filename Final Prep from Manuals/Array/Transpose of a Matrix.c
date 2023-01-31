#include<stdio.h>
int main()
{
    int a[10][10],b[10][10],i,n,j,row,col;
    printf("Enter the rows and col of the matrix : ");
    scanf("%d %d",&row,&col);

    printf("Enter the elements of the matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A [%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A is : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            b[j][i] = a[i][j];
        }
    }

    printf("Transpose of Matrix A is : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }



    return 0;
}
