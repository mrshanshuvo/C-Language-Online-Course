//write a c program that prints int,float,double and char.

#include<stdio.h>
int main()
{
    int num1 = 13993;
    float num2 = 1233412.23424;
    double num3 = 434524.4232345252;
    char ch = 'd';

    printf("integer number is %d\n",num1);
    printf("floating number is %.f\n",num2);
    printf("double number is %lf\n",num3);
    printf("character is %c",ch);

    return 0;
}
