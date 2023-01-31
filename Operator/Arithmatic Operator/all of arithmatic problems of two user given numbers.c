//write a program that takes two integer and display sum

#include<stdio.h>
int main()
{
    int num1,num2,sum,sub,mul,rem;
    float avg;
    printf("enter two numbers : ");
    scanf("%d%d",&num1,&num2);

    sum = num1+num2;
    avg = (float)sum/2; //type casting
    sub = num1-num2;
    mul = num1*num2;
    rem = num1%num2;

    printf("the sum of %d and %d numbers is : %d\n",num1,num2,sum);
    printf("the avg of %d and %d numbers is : %.2f\n",num1,num2,avg);

    printf("the sub of %d and %d numbers is : %d\n",num1,num2,sub);
    printf("the mul of %d and %d numbers is : %d\n",num1,num2,mul);
    printf("the remainder of %d and %d numbers is : %d\n",num1,num2,rem);

    return 0;
}
