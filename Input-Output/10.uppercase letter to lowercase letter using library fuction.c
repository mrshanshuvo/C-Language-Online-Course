//print lowercase letter from user given uppercase letter using function library
#include<stdio.h>
int main()
{
    char lower,upper;
    printf("enter any uppercase letter : ");
    scanf("%c",&upper);

    lower = tolower(upper);

    printf("the lowercase letter is : %c",lower);

    return 0;
}
