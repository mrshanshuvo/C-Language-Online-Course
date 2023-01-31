//print octal number from user given decimal number
#include<stdio.h>
int main()
{
    int number;
    printf("enter any decimal number : ");
    scanf("%d",&number);

    printf("the octal number is : %o\n",number);
    printf("the hexadecimal number is : %x\n",number);

    getch();
}
