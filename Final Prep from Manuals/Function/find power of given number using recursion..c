//Write a C program to input a number from user and find power of given number using recursion.

#include <stdio.h>
int main()
{
    int base,expo;
    printf("Enter any number : ");
    scanf("%d",&base);
    printf("Enter any positive exponent : ");
    scanf("%d",&expo);

    power(base,expo);
    printf("%d ^ %d = %d",base,expo,power(base,expo));

    return 0;
}
int power(int base, int expo)
{
    if (expo>0)
        return base * power(base, expo-1);
    else
        return 1;
}
