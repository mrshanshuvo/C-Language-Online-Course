//Write a C program to swap two numbers using pointers.

#include<stdio.h>
int main()
{
    int *ptr1,*ptr2,temp,a,b;
    printf("Enter two different numbers : ");
    scanf("%d %d",&a,&b);

    ptr1 = &a;
    ptr2 = &b;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swap : %d %d",*ptr1,*ptr2);


    return 0;
}
