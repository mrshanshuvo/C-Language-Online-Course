#include<stdio.h>
int main()
{
    float length,width,area;
    printf("enter length and width of a rectangle : ");
    scanf("%f%f",&length,&width);

    area = length*width;

    printf("the area of the rectangle is : %.2f\n",area);

    return 0;
}
