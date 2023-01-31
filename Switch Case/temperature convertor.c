#include<stdio.h>
int main()
{
    int choice;
    float F,C,convertedTemp;

    printf("****TEMPERATURE conversion Menu****\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Enter your choice : ");
    scanf("%d",&choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter the Fahrenheit temperature : \n");
            scanf("%f",&F);
            convertedTemp = (F-32)/1.8;
            printf("The converted temperature in Celsius : %f\n",convertedTemp);
        }
        break;
    case 2:
        {
            printf("Enter the Celsius temperature : \n");
            scanf("%f",&C);
            convertedTemp = (1.8*C)+32;
            printf("The converted temperature in Fahrenheit : %f\n",convertedTemp);
        }
        break;
    default:
        printf("Invalid !!!!!");
    }



}
