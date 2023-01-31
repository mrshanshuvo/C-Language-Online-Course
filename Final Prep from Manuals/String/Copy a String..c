//Write a C Program to Copy a String.

#include<stdio.h>
int main()
{
    char source[20],destination[20];
    printf("Enter a Sentence : ");
    gets(source);
    strcpy(destination,source);

    printf("%s\n",source);
    printf("%s\n",destination);

    return 0;
}
