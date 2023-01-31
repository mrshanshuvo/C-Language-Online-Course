#include<stdio.h>
int main()
{
    int a[]={12,23,34,45,56};
    int *ptr,i;

    ptr = &a[0];

    for(i=0; i<5; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }


    return 0;
}
