//Write a C program using nested structure to print your name and address with location.

#include<stdio.h>
struct PERSON
{
    char address[20];
    char name[20];
    struct location
    {
        char district[10];
    }loc ;
}v1;
int main()
{
    printf("Enter Name : ");
    fflush(stdin);
    gets(v1.name);
    printf("Enter Address : ");
    fflush(stdin);
    gets(v1.address);
    printf("Enter your Location of : ");
    fflush(stdin);
    gets(v1.loc.district);


    printf("%s was born in %s and his current location is %s",v1.name,v1.address,v1.loc.district);

    return 0;
}
