#include<stdio.h>
int main()
{
    int i,j;
    int a[3][4],b[3][4];

    printf("Enter values for matrix A : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }

    printf("A =\n");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    printf("Enter values for matrix B : \n");
    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("b[%d][%d] = ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }

    printf("B =\n");
    for(i=0; i<3; i++)
    {
        printf("\t");
        for(j=0; j<4; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }



    return 0;
}
