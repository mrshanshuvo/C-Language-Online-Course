//Write a C program to calculate sum of all digits of a number using recursion.

#include<stdio.h>
int main()
{
    int num,result;
    printf("Enter the number to find the sum of its digits : ");
    scanf("%d",&num);

    result = sum(num);
    printf("Sum of digits is : %d",result);

    return 0;
}
int sum(int num)
{
    if(num>0)
        return num%10 + sum(num/10);
    else
        return 0;
}
