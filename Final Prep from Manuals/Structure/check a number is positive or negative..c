//Write a C program to check a number is positive or negative.

#include<stdio.h>
struct pos_neg
{
    int n;
} a;
int main()
{
    int i;
    printf("Enter any integer number : ");
    scanf("%d",&a.n);

    if(a.n<0)
        printf("NEGETIVE");
    else if (a.n >=0)
        printf("POSITIVE");

    return 0;
}

