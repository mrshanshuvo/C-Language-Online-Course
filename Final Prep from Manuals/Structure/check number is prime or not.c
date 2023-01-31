//Write a C program to check number is prime or not

#include<stdio.h>
struct prime
{
    int n;
} a;
int main()
{
    int i,count;
    printf("Enter any positive integer number : ");
    scanf("%d",&a.n);

    for(i=2; i<a.n; i++)
    {
        if(a.n % i == 0)
            count++;
            break;
    }
    if(count==0)
        printf("\nPrime Number\n");
    else
        printf("\nNot Prime Number\n");

    return 0;
}
