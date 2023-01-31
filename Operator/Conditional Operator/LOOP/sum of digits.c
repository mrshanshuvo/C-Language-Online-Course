#include<stdio.h>
int main()
{
    int n,sum=0,rem;
    printf("Enter digits =  ");
    scanf("%d",&n);

    while(n!=0)
    {
        rem = n%10;
        sum+= rem;
        n = n/10;
    }

    printf("%d",sum);

    return 0;
}
