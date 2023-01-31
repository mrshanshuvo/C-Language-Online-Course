#include<stdio.h>
int main()
{
    int num1,num2,temp;
    printf("enter the numbers : ");
    scanf("%d%d",&num1,&num2);

    temp = num1;
    num1 = num2;
    num2 = temp;

    printf("the swapped numbers is : %d %d",num1,num2);


    return 0;
}
