// write a program that calculates the area of a triangle
#include<stdio.h>
int main()
{
    float base,height,area;
    printf("base = ");
    scanf("%f",&base);
    printf("height = ");
    scanf("%f",&height);

    area = .5 * base * height;

    //area = (float)1/2 * base * height;

    printf("area = %.2f",area);

    return 0;
}
