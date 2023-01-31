#include<stdio.h>
int main()
{
    int num,exp;

    printf("Enter any base number : ");
    scanf("%d",&num);
    printf("Enter exponential : ");
    scanf("%d",&exp);

    power(num,exp);

    return 0;
}
void power(int a, int b)
{
    int i,result=1;

    for(i=1; i<=b; i++)
    {
        result = result * b;
    }

    printf("The result is : %d",result);
}
