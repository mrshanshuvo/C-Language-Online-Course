#include<stdio.h>
int main()
{
    int num;
    printf("Enter any integer number : ");
    scanf("%d",&num);
    int result = square(num);
    printf("Square of the number is : %d",result);
    return 0;
}
int square (int a)
{
    return a*a;
}
