#include<stdio.h>
int main()
{
    int a=6;

    a+=5;
    printf("result is : %d\n",a);
    a-=5;       //a=11
    printf("result is : %d\n",a);
    a*=5;       //a=6
    printf("result is : %d\n",a);
    a/=5;       //a=30
    printf("result is : %d\n",a);
    a%=5;       //a=6
    printf("result is : %d\n",a);

    return 0;
}
