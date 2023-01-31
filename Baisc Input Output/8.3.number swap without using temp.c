#include<stdio.h>
int main()
{
    int num1 = 49;
    int num2 = 97;

    num1 = num1 - num2;
    num2 = num1 + num2;
    num1 = num2 - num1;

    printf("the swapped numbers is : %d %d",num1,num2);

    return 0;
}
