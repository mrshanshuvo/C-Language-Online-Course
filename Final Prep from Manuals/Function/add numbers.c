#include<stdio.h>
void add(int a, int b)
{
    printf("Sum : %d\n",a+b);
}
void sub(int a, int b)
{
    printf("Sub : %d\n",a-b);
}
void mul(int a, int b)
{
    printf("Mul : %d\n",a*b);
}
void div(int a, int b)
{
    printf("Div : %d\n",a/b);
}
void rem(int a, int b)
{
    printf("Rem : %d",a%b);
}
int main()
{
    int n1,n2;
    printf("Enter two integer numbers : ");
    scanf("%d %d",&n1,&n2);
    add(n1,n2);
    sub(n1,n2);
    mul(n1,n2);
    div(n1,n2);
    rem(n1,n2);

    return 0;
}
