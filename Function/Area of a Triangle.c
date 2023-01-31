#include<stdio.h>
double area(double a, double b)
{
    return 0.5*a*b;
}
int main()
{
    double a,base,height;
    printf("Enter the base and height of a triangle : ");
    scanf("%lf %lf",&base,&height);

    a = area(base,height);
    printf("The area of the triangle is : %lf",a);

    return 0;
}
