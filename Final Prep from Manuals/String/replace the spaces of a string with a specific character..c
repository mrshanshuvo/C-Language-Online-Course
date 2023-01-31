//Write a program in C to replace the spaces of a string with a specific character.

#include <stdio.h>
int main()
{
    char shan[20],ch;
    int i,len;

    printf("Enter any sentence : ");
    gets(shan);
    printf("Enter the special char to replace with space : ");
    scanf("%c",&ch);

    len = strlen(shan);

    for(i=0; i<len; i++)
    {
        if(shan[i] == ' ')
            shan[i] = ch;
    }

    printf("String after replacing spaces with given character: \n");
    printf("%s",shan);

    return 0;
}
