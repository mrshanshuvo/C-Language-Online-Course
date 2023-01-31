#include<stdio.h>

int add(int a, int b, int c)
{
    return a+b+c;
}
void sub(int a, int b)
{
    printf("sub = %d\n", a-b);
}
int mul(int a, int b)
{
    return a*b;
}
int div(int a, int b)
{
    return a/b;
}
int rem(int a, int b)
{
    return a%b;
}

int main()
{
    sub(100,28);

    printf("Sum = %d\n",add(5,5,5));
    printf("mul = %d\n",mul(56,6));
    printf("div = %d\n",div(70,5));
    printf("rem = %d\n",rem(123,7));

    return 0;
}
