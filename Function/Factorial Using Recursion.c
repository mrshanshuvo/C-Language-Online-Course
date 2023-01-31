#include<stdio.h>
int main()
{
    int num;
    printf("Enter any integer to find its factorial : ");
    scanf("%d",&num);

    int result = fact(num);
    printf("Factorial of %d is = %d\n",num,result);

    return 0;
}
int fact(int a)
{
    if(a==1)
        return 1;
    else
        return a*fact(a-1);
}
