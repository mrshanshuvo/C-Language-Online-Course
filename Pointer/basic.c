#include<stdio.h>
int main()
{
    int a,b,sum;
    int *ptr1,*ptr2;

    printf("\nEnter two different integer : ");
    scanf("%d %d",&a,&b);

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;
    printf("\nSum of two number is : %d\n",sum);

    return 0;
}
