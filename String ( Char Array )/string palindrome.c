#include<stdio.h>
int main()
{
    char a[10];
    char b[10];
    int i,j,len=0;

    printf("Enter words : ");
    gets(a);

    for(i=0; a[i]!='\0'; i++)
    {
        len++;
    }

    for(j=0,i=len-1; i>=0; i--,j++)
    {
        b[j] = a[i];
    }
    b[j]='\0';

    int d = strcmp(a,b);
    if(d==0)
        printf("PALINDROME\n");
    else
        printf("NOT PALINDROME\n");



    return 0;
}
