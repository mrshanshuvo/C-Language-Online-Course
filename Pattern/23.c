#include<stdio.h>
int main()
{
    int n,col,row;
    printf("Enter the range of the program : ");
    scanf("%d",&n);

    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }
    for(row=n;row>=1;row--)
    {
        for(col=1;col<=row;col++)
        {
            printf("%d ",row);
        }
        printf("\n");
    }



    return 0;
}

