#include<stdio.h>
int main()
{
    char ch;
    printf("enter any character : ");
    scanf("%c",&ch);

    if(ch>='A' && ch<='Z')
        printf("the character is uppercase");
    else if (ch>='a' && ch<='z')
        printf("the character is lowercase");
    else
        printf("Not a character");


    return 0;
}
