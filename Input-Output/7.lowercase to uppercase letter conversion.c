//print uppercase letter from user given lowercase letter
#include<stdio.h>
int main()
{
    char lower;
    printf("enter any lowercase letter : ");
    scanf("%c",&lower);

    printf("the uppercase letter will be : %c",lower-32);

}
