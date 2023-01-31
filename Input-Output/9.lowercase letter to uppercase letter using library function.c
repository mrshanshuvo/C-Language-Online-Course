//print uppercase letter from user given lowercase using library function
#include<stdio.h>
int main()
{
    char lower,upper;
    printf("enter any lowercase letter : ");
    scanf("%c",&lower);

    upper = toupper(lower);

    printf("the uppercase letter is : %c",upper);


    return 0;
}
