#include<stdio.h>
int main()
{
    char a[]="shahid";
    char b[]="shahid ";

    int d = strcmp(a,b);

    if(d==0)
        printf("equal");
    else
        printf("not equal");


    return 0;
}
