#include<stdio.h>
int main()
{
    float C,F;
    printf("enter the temperature in Fahrenheit : ");
    scanf("%f",&F);

    C = (F-32)/1.8;

    printf("the temperature in Celsius is : %f",C);

    return 0;
}

