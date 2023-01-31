//Write a C program to calculate area of circle

#include<stdio.h>
struct circle
{
    float radius;
}v1;
int main()
{
    float area;
    printf("Enter the radius of the circle : ");
    scanf("%f",&v1.radius);
    area = 3.1416 * v1.radius * v1.radius;

    printf("Area of the circle : %.2f",area);

    return 0;
}
