/*
   a
  ab
 abc
abcd
 abc
  ab
   a
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
            printf("%c",col+96);
        }
        printf("\n");
    }
    for(row=n-1; row>=1; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf(" ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%c",col+96);
        }
        printf("\n");
    }

    return 0;
}

