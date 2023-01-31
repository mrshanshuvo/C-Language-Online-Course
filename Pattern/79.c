#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the range : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=n; col>=1; col--)
        {
            if(row<=col)
                printf("%d ",col);
            else
                printf(" ");
        }
        printf("\n");
    }


    return 0;
}
