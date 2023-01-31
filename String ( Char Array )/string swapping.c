#include<stdio.h>
int main()
{
    char a[20]="BANGLADESH";
    char b[20]="PAKISTAN";
    char c[20];

    printf("\nBefore Swapping :\n");
    printf("%s\n",a);
    printf("%s\n",b);

    strcpy(c,a);
    strcpy(a,b);
    strcpy(b,c);

    printf("\nAfter Swapping : \n");
    printf("%s\n",a);
    printf("%s\n",b);


    return 0;
}
