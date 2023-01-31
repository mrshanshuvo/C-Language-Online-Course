#include<stdio.h>
int main()
{
    float pi,radius,area;
    printf("enter the radius of the circle : ");
    scanf("%f",&radius);

    pi = 3.1416;

    area = pi*radius*radius;

    printf("the area of the circle is : %.2f",area);

    return 0;
}
