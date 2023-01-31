#include<stdio.h>
int main()
{
    int i,j,row,col,a[10][10],b[10][10];
    printf("Enter the range of the matrix (row and col) : ");
    scanf("%d %d",&row,&col);

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("A =");
    for(i=0; i<row; i++)
    {
        printf("\t");
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
        printf("\n");
    }

    printf("The Transposed Matrix =\n");
    for(i=0; i<row; i++)
    {
        printf("\t\t\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }


    return 0;
}
