/*
   1
  00
 111
0000
0000
 111
  00
   1
*/
#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter the range of the program : ");
    scanf("%d",&n);

    for(row=1; row<=n; row++)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d",row%2);
        }
        printf("\n");
    }
    for(row=n; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d",row%2);
        }
        printf("\n");
    }

    return 0;
}


