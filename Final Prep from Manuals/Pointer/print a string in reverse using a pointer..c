//Write a program in C to print a string in reverse using a pointer.

#include <stdio.h>
int main()
{
    char *s;
    int len,i;

    printf("\nENTER A STRING : ");
    gets(s);

    len=strlen(s);

    printf("\nTHE REVERSE OF THE STRING IS : ");
    for(i=len; i>=0; i--)
        printf("%c",*(s+i));

    return 0;
}
