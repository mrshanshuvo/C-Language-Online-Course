//Print your name and joining date using nested structure using C

#include<stdio.h>
struct PERSON
{
    int age;
    char name[20];
    struct date
    {
        int dd;
        int mm;
        int year;
    }dob;
}v1;
int main()
{
    printf("Enter age : ");
    scanf("%d",&v1.age);
    printf("Enter name : ");
    fflush(stdin);
    gets(v1.name);
    printf("Enter Day , Month and Year : ");
    scanf("%d %d %d",&v1.dob.dd,&v1.dob.mm,&v1.dob.year);

    printf("%s was born on %d/%d/%d and his age is %d",v1.name,v1.dob.dd,v1.dob.mm,v1.dob.year,v1.age);

    return 0;
}
