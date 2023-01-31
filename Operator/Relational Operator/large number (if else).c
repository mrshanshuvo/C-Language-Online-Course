#include<stdio.h>
int main()
{
    int a,b;
    printf("enter any integer : ");
    scanf("%d",&a);
    printf("enter any integer : ");
    scanf("%d",&b);

    if (a>b)
        printf("%d is larger than %d",a,b);
    else if (b>a)
        printf("%d is larger than %d",b,a);
    else
        printf("%d and %d is equal",a,b);


    return 0;
}
