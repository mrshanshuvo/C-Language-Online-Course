#include<stdio.h>
int main()
{
    int i,n,odd=0,even=0,total;
    printf("Enter any integer : ");
    scanf("%d",&n);

    for (i=1;i<=n;i=i+2)
    {
        odd = odd + i;
    }
    for (i=2;i<=n;i=i+2)
    {
        even = even + i;
    }

    total = odd-even;

    printf("Total of ODD-Even = %d",total);

    return 0;
}
