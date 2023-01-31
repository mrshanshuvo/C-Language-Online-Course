#include<stdio.h>
int main()
{
    double result,n;
    printf("enter any number : ");
    scanf("%lf",&n);

    result = sqrt(n);

    printf("the result is : %.2lf",result);

    return 0;
}
