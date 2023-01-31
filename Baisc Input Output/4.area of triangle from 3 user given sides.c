#include<stdio.h>
int main()
{
    float a,b,c,s,area;
    printf("enter three sides of a triangle : ");
    scanf("%f%f%f",&a,&b,&c);

    s = (a+b+c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("the area of the triangle is : %.2f",area);

    return 0;
}
