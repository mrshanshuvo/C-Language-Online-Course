//Take 2 input rectangle length and breadth from user.Find the area of rectangle using structure by C.

#include<stdio.h>
struct RECTANGLE
{
    float lengh,breath;
};
int main()
{
    struct RECTANGLE n;
    int area;
    printf("Enter the length : ");
    scanf("%f",&n.lengh);
    printf("Enter the breath : ");
    scanf("%f",&n.breath);

    area = n.lengh * n.breath;

    printf("Area : %d",area);

    return 0;
}
