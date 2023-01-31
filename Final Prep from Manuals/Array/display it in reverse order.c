//Write a program in C to read n number of values in an array and display it in reverse order.

#include<stdio.h>
int main()
{
    int i,n,a[10];
    printf("Enter how many elements you want to put : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    //after reverse
    printf("After reversed : ");
    for(i=n-1; i>=0; i--)
    {
        printf("%d ",a[i]);
    }

    return 0;
}

