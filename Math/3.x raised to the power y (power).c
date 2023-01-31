#include<stdio.h>
int main()
{
    double result,n,r;
    printf("enter two numbers to find square : ");
    scanf("%lf%lf",&n,&r);

    result = pow(n,r);

    printf("the result is : %.2lf",result);

    return 0;
}
