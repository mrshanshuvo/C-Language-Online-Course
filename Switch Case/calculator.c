#include<stdio.h>
int main()
{
    double num1,num2;
    char op;

    printf("Enter any operator (+,-,*,/) : ");
    scanf("%c",&op);

    printf("Enter the first number : ");
    scanf("%lf",&num1);

    printf("Enter the second number : ");
    scanf("%lf",&num2);

    switch(op)
    {
        case '+': {printf("%lf + %lf = %lf",num1,num2,num1+num2); break;}
        case '-': {printf("%lf - %lf = %lf",num1,num2,num1-num2); break;}
        case '*': {printf("%lf * %lf = %lf",num1,num2,num1*num2); break;}
        case '/': {printf("%lf / %lf = %lf",num1,num2,num1/num2); break;}

    default: printf("***********INVALID Choice ***********");
    }

}
