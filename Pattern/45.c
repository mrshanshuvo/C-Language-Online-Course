/*
1010
 101
  10
   1
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the range of the program : ");
    scanf("%d",&n);

    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d",col%2);
        }
        printf("\n");
    }


    return 0;
}

