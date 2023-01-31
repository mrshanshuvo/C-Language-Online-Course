#include<stdio.h>
int main()
{
    int num;
    printf("Enter the digits : ");
    scanf("%d",&num);

    printf("\nSum of the digits (without using recursion) is : %d\n",add(num));
    printf("\nSum of the digits (using recursion) is : %d\n",addRE(num));

    return 0;
}

int addRE(int num)
{
    int sum=0;
    if(num==0)
        return 0;
    else
        return (num%10 + addRE(num/10));
}

int add(int num)
{
    int sum=0;
    while(num)
    {
        sum = sum + num % 10;
        num = num/10;
    }
    return (sum);
}

