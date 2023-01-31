#include<stdio.h>
int main()
{
    int result,n;
    printf("enter any integer number : ");
    scanf("%d",&n);

    result = abs(n);

    printf("the absolute value of %d is = %d",n,result);

    return 0;
}
