//Write a C program to print your name, date of birth and mobile number.

#include<stdio.h>
struct PERSON
{
    char name[100];
    int number;
    struct date
    {
        int dd;
        int mm;
        int year;
    }dob;
}v1;
int main()
{
    printf("Enter your name : ");
    fflush(stdin);
    gets(v1.name);
    printf("Enter your number : ");
    scanf("%d",&v1.number);
    printf("Enter your DOB (dd/mm/year) : ");
    scanf("%d %d %d",&v1.dob.dd,&v1.dob.mm,&v1.dob.year);

    printf(" \n Name : %s \n Number : %d \n DOB : %d/%d/%d\n",v1.name,v1.number,v1.dob.dd,v1.dob.mm,v1.dob.year);

    return 0;
}
