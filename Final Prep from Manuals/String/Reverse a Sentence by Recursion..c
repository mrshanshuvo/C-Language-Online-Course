//Write a C Program to Reverse a Sentence by Recursion.

#include <stdio.h>
int main()
{
    char shan[20];
    printf("Enter any sentence : ");
    gets(shan);
    rev(shan);

    return 0;
}
void rev(char *shan)
{
    if(*shan != '\0')
    {
        rev( shan + 1);
        printf("%c", *shan);
    }
}
