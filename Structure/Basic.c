#include<stdio.h>
struct Person
{
    char name[50];
    int age;
    float salary;
};
int main()
{
    struct Person person[10];
    int num,i;

    printf("How many information you want enter : ");
    scanf("%d",&num);

    for(i=0; i<num; i++)
    {
        printf("Enter information of PERSON %d :\n",i+1);
        printf("Enter Name : ");
        fflush(stdin);
        gets(person[i].name);
        printf("Enter Age : ");
        scanf("%d",&person[i].age);
        printf("Enter Salary : ");
        scanf("%f",&person[i].salary);
    }

    for(i=0; i<num; i++)
    {
        printf("\n\nInformation of PERSON %d :\n",i+1);
        printf("Name : %s\n",person[i].name);
        printf("Age : %d\n",person[i].age);
        printf("Salary : %.2f\n",person[i].salary);
    }

    return 0;
}
