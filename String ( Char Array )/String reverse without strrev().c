#include<stdio.h>
int main()
{
    char a[30]="shahid hasan";
    char b[30];

    int i,j,len=0;
    for(i=0; a[i]!='\0'; i++)
    {
        len++;
    }

    for(j=0,i=len-1; i>=0; i--, j++)
    {
        b[j] = a[i];
    }

    printf("%s",b);


    return 0;
}
