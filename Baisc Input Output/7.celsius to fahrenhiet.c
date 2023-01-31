#include<stdio.h>
int main()
{
    float C,F;
    printf("enter the temperature in Celsius : ");
    scanf("%f",&C);

    F = (C * 1.8)+32;

    printf("the temperature in Fahrenheit is : %f",F);

    return 0;
}
