#include<stdio.h>
void display(int);
int main()
{
    int num;

    printf("Please Enter any Integer Value  : ");
    scanf("%d", &num);

    printf("\nNatural Numbers from 1 To %d are : \n",num);
    display(num);

    return 0;
}
void display(int num)
{
    if(num <= 0)
        return 0;
    else
        printf("%d\n",num);
    display(num-1);
}
