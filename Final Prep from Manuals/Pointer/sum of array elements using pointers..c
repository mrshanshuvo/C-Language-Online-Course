//Write a C program to find the sum of array elements using pointers.

#include<stdio.h>
int main()
{
    int shan[]={1,2,3,4,5,6,7,8,9};
    int i,sum=0;
    int *ptr = shan;
    for(i=0; i<9; i++)
    {
        printf("%d\n",*ptr);
        sum = sum + *ptr;
        ptr++;
    }

    printf("Sum : %d",sum);


    return 0;
}
