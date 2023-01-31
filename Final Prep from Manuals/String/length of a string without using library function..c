//Write a program in C to find the length of a string without using library function.

#include<stdio.h>
int main()
{
    char shan[20];
    printf("Enter any sentence : ");
    gets(shan);
    char *ch=shan;
    int i,c=0;
    for(i=0; shan[i]!= '\0'; i++)
    {
        c++;
    }
    printf("%d",c);

    return 0;
}
