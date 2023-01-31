//Write a program in C to extract a substring from a given string.

#include <stdio.h>
void main()
{
    char str1[100],str2[100];
    int pos,len,i;

    printf("Input the string : ");
    gets(str1);

    printf("Input the position to start extraction : ");
    scanf("%d", &pos);

    printf("Input the length of substring : ");
    scanf("%d", &len);

    for(i=0; i<len; i++)
    {
        str2[i] = str1[pos+i-1];
    }
    str2[i] = '\0';

    printf("The substring retrieve from the string is :  %s\n", str2);
}
