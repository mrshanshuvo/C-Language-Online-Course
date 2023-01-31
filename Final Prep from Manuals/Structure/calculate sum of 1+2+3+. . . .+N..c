//Write a C program to calculate sum of 1+2+3+. . . .+N.

#include<stdio.h>
struct sum
{
    int n;
}a;
int main()
{
    int sum=0,i;
    printf("Enter the n term : ");
    scanf("%d",&a.n);
    for(i=0; i<=a.n; i++)
    {
        sum = sum + i;
    }
    printf("\nSum of %d term of the series : %d\n",a.n,sum);

    return 0;
}
