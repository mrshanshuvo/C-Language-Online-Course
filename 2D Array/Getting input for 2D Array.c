#include<stdio.h>
int main()
{
    int i,j,a[4][4];

    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    for(i=0; i<4; i++)
    {
        for(j=0; j<4; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }

    return 0;
}
