#include<stdio.h>
int main()
{
    int yr;
    printf("enter any year : ");
    scanf("%d",&yr);

    if(yr%400 == 0)
        printf("Leap year");
    else if (yr%4 == 0 && yr%100 != 0)
        printf("leap year");
    else
        printf("Not Leap Year");

    return 0;
}
