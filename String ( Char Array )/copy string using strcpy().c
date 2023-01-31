#include<stdio.h>
int main()
{
    char a[]="green university of bangladesh";
    char b[100];

    strcpy(b,a);

    printf("%s\n",a);
    printf("%s\n",b);


    return 0;
}
