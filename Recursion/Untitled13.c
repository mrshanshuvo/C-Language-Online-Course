#include<stdio.h>

int main()
{
    int i,j,row,col,arr[10][10],temp;

    printf("\n Please Enter Number of row and col  :  ");
    scanf("%d %d",&i,&j);

    printf("\n Please Enter the Matrix Elements \n");
    for(row=0; row<i; row++)
    {
        for(col=0; col<j; col++)
        {
            scanf("%d",&arr[row][col]);
        }
    }
    printf("\n Before Interchanging the diagonals \n");
    for(row=0; row<i; row++)
    {
        for(col=0; col<j; col++)
        {
            printf("%3d",arr[row][col]);
        }
        printf("\n");
    }

    if(row==col)
    {
        for(row=0; row<i; row++)
        {
            for(col=0; col<j; col++)
            {
            temp = arr[row][row];
            arr[row][row] = arr[row][i-row-1];
            arr[row][i-row-1] = temp;
            }
        }

        printf("\n Matrix Elements after Interchanging Diagonals are: \n");
        for(row=0; row<j; row++)
        {
            for(col=0; col<i; col++)
            {
                printf("%3d",arr[row][col]);
            }
            printf("\n");
        }
    }
    else
    {
        printf("\n The Matrix that you entered is Not a Square matrix" );
    }

    return 0;
}
