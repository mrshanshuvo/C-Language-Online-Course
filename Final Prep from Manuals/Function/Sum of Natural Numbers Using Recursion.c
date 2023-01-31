#include<stdio.h>
int sumofnatural(int a)
{
    if (a>0)
    {
       return a + sumofnatural(a-1);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int num;
    printf("Enter the range of natural numbers : ");
    scanf("%d",&num);

    sumofnatural(num);
    printf("Sum : %d",sumofnatural(num));

    return 0;
}
