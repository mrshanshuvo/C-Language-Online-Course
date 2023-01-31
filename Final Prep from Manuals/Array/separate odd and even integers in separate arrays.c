//Write a program in C to separate odd and even integers in separate arrays.

#include<stdio.h>
int main()
{
    int i,n,a[10],b[10],c[10];
    printf("Enter how many elements you want to put : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        if (a[i]%2 == 0)
        {
            b[j] = a[i];
            j++;
        }
        else
        {
            c[k] = a[i];
            k++;
        }
    }

    printf("\nThe Even elements are : \n");
    for(i=0; i<j; i++)
    {
        printf("%d ",b[i]);
    }

    printf("\nThe Odd elements are :\n");
    for(i=0; i<k; i++)
    {
        printf("%d ", c[i]);
    }
    printf("\n\n");


    return 0;
}
