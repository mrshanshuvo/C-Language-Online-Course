//Write a C program to calculate Celsius to Fahrenheit


#include<stdio.h>
struct temp
{
    float C;
}v1;
int main()
{
    float f;
    printf("Enter the temperature in Celsius : ");
    scanf("%f",&v1.C);

    f = (1.8*v1.C)+32;

    printf("Temperature in Fahrenheit : %.2f",f);

    return 0;
}
