#include<stdio.h>
int main()
{
    char a[100]="what is your name?";
    char b[]=" = my name is shahid hasan shuvo";

    int i=0, j=0, len=0;

    while(a[i]!='\0')
    {
        i++;
        len++;
    }
    while(b[j]!='\0')
    {
        a[len+j] = b[j];
        j++;
    }
    printf("%s",a);


    return 0;
}
