//Write a C Program to print Perfect Numbers between given interval using function.

#include<stdio.h>
int main()
{
    int num;
    printf("Enter any positive integer number : ");
    scanf("%d", &num);
    perfect(num);

    return 0;
}
int perfect(int num)
{
    int n,sum =0,i;
    n=num;
    for(i=1; i<n; i++)
    {
        if(n%i==0)
            sum = sum + i;
    }
    if(num == sum)
        printf("%d is a PERFECT number",num);
    else
        printf("%d is not a PERFECT number",num);
}
