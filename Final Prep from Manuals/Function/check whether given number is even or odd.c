//Write a C program to input a number from user and check whether given number is even or odd using functions.

#include<stdio.h>
void check(int a)
{
    if(a%2==0)
    {
        printf("\nEVEN\n");
    }
    else if(a%2==1)
    {
        printf("\nODD\n");
    }
}
int main()
{
    int n;
    printf("Enter the number to check whether it is ODD or EVEN : ");
    scanf("%d",&n);
    check(n);

    return 0;
}
