//Write a program in C to count total number of alphabets, digits and special characters in a string.

#include<stdio.h>
int main()
{
    char shan[20],ch;
    printf("Enter any characters : ");
    gets(shan);
    int alp,digit,special,i,space;
    alp=digit=space=special=0;
    for(i=0; (ch=shan[i])!='\0'; i++)
    {
        if((ch>='a' && ch <='z') || (ch>='A' && ch<='Z'))
            alp++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch=' ')
            space++;
        else
            special++;
    }
    printf("Alphabets : %d\n",alp);
    printf("Digits : %d\n",digit);
    printf("Space : %d\n",space);
    printf("Special : %d\n",special);

    return 0;
}
