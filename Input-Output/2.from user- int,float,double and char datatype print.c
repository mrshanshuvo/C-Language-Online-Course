//write a c program that takes input and prints int,float,double and char.

#include<stdio.h>
int main()
{
    int num1;
    float num2;
    double num3;
    char ch;

    printf("enter any character:    ");
    scanf("%c",&ch);
    printf("enter any integer number:   ");
    scanf("%d",&num1);
    printf("enter any floating number:  ");
    scanf("%f",&num2);
    printf("enter any double number:    ");
    scanf("%lf",&num3);

    printf("the given number is : %d\n",num1);
    printf("the given number is : %d\n",num2);
    printf("the given number is : %d\n",num3);
    printf("the given character is : %c",ch);

    return 0;
}
