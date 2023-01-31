//Write a C Program to convert a decimal number to an equivalent binary number using function.

#include<stdio.h>
int main()
{
    int n;
    printf("Enter any positive Decimal number : ");
    scanf("%d",&n);
    decimal(n);m

    return 0;
}
int decimal(int n)
{
    int rem,binary=0,i,temp=1;
    for(i=0; n!=0 ; i++)
    {
        rem = n%2;
        n   = n/2;
        binary = binary + rem * temp;
        temp = temp * 10;
    }
    printf("Binary number is : %d",binary);
}
