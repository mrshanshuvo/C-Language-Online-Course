#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter two different num : ");
    scanf("%d %d",&a,&b);

    int *ptr1 = &a, *ptr2 = &b;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping : %d %d",*ptr1,*ptr2);



    return 0;
}
