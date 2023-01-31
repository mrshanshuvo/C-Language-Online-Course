#include<stdio.h>
int main()
{
    int i,j,row,col;
    int a[10][10],b[10][10],c[10][10];

    printf("Enter the number of rows and cols : ");
    scanf("%d %d",&row,&col);

    printf("Enter the values of matrix A : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the values of matrix B : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("\nA =\n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("\nB =\n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j] = a[i][j]+b[i][j];
        }
    }

    printf("\nSum of two matrix =\n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }



    return 0;
}
