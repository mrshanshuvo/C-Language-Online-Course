#include<stdio.h>
int main()
{
    int num;
    printf("enter any number : ");
    scanf("%d",&num);

    if(num%2==0)
        printf("Even\n");
    if(num%2!=0)
        printf("ODD");


    return 0;
}

