//Write a C program to copy one array elements to another using pointers.

#include<stdio.h>
int main()
{
    int a[10],b[10];
    int n,i;
    printf("Enter range of arr1 : ");
    scanf("%d",&n);
    printf("Enter the elements of arr1 : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int *ptr = a;
    for(i=0; i<n; i++)
    {
        b[i]=*ptr;
        ptr++;
    }
    printf("Copied arr2 is : ");
    for(i=0; i<n; i++)
    {
        printf("%d ",b[i]);
    }

    return 0;
}
