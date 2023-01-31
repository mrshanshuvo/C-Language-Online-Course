#include<stdio.h>
int main()
{
    int num1,num2,num3,sum;
    float avg;

    printf("enter three numbers : ");
    scanf("%d%d%d",&num1,&num2,&num3);

    sum = num1+num2+num3;
    avg = (float)sum/3;

    printf("sum of %d, %d and %d is = %d\n",num1,num2,num3,sum);
    printf("avg of %d, %d and %d is = %.2f\n",num1,num2,num3,avg);

    return 0;
}
