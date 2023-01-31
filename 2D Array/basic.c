#include<stdio.h>
int main()
{
    int a[3][4]={ {1,3,5,6} , {23,54,65,37} , {234,65,76,23}  };
    int i,j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }


    return 0;
}
