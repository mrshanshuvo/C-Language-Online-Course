//Write a program in C to print all the alphabets using a pointer.

#include <stdio.h>
int main()
{
    char alph[27];
    int i;
    char *ptr;

    ptr = alph;

    for(i=0; i<26; i++)
    {
        *ptr = i + 'a';
        ptr++;
    }
    ptr = alph;

    printf(" The Alphabets are : \n");
    for(i=0; i<26; i++)
    {
        printf(" %c ", *ptr);
        ptr++;
    }

    return(0);
}
