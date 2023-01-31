//Create a structure, pass 2 variable and print them using c program.

#include<stdio.h>
struct PERSON
{
    int age;
    float salary;
};

int main()
{
    struct PERSON Shan;
    printf("Enter his age : ");
    scanf("%d",&Shan.age);
    printf("Enter his salary : ");
    scanf("%f",&Shan.salary);
    printf("\nHe is %d years old and his salary is %.2f\n",Shan.age,Shan.salary);

    return 0;
}
