#include<stdio.h>
int main()
{
    int i,n,mul=1;
    printf("Enter any integer : ");
    scanf("%d",&n);

    for (i=1;i<=n;i++)
    {
        mul = mul * i * i;
    }

    printf("Multiplication till %dth number is : %d",n,mul);


    return 0;
}
