#include<stdio.h>
void swapp(int *ptr1, int *ptr2)
{
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("After swapping : %d %d",*ptr1,*ptr2);
}
int main()
{
    int a,b;
    printf("Enter two different num : ");
    scanf("%d %d",&a,&b);

    swapp(&a,&b);

    return 0;
}
