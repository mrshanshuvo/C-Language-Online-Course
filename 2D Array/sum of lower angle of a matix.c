#include<stdio.h>
int main()
{
    int i,j,row,col,a[10][10],sum=0;
    printf("Enter the values of rows and cols : ");
    scanf("%d %d",&row,&col);

    //input
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    //output
    printf("A = \n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    printf("The lower angle of the matrix : ");

    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            if(i>j)
            {
                printf("%d ",a[i][j]);
                sum += a[i][j];
            }
        }
    }

    printf("\nSum of the diagonal elements : %d ",sum);



    return 0;
}


