#include<stdio.h>
int main()
{
    int a[10][10], b[10][10], c[10][10];
    int i,j,k,r1,r2,c1,c2,sum=0;

    printf("Enter the number of rows and cols for matrix A : ");
    scanf("%d %d",&r1,&c1);
    printf("Enter the number of rows and cols for matrix B : ");
    scanf("%d %d",&r2,&c2);

    while(c1!=r2)
    {
        printf("ERROR in the INPUT !!!!\n");
        printf("Enter the number of rows and cols for matrix A : ");
        scanf("%d %d",&r1,&c1);
        printf("Enter the number of rows and cols for matrix B : ");
        scanf("%d %d",&r2,&c2);
    }

    //take input
    printf("Enter the values of matrix A : \n");
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("Enter the values of matrix B : \n");
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    //A matrix print
    printf("A : \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    //B matrix print
    printf("B : \n");
    for(i=0; i<r2; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    //multiplication
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            for(k=0; k<r2; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            c[i][j] = sum;
            sum = 0;
        }
    }

    //output
    printf("Multiplication of the two matrix : \n");
    for(i=0; i<r1; i++)
    {
        printf("\t");
        for(j=0; j<c2; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
