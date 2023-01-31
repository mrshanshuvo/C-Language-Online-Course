//1^2+2^2+3^2+........+n^2=?

#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter any integer : ");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        if(i==1)
            printf("%d +",i);
            else if(i==n)
                printf(" %d^2",i);
            else
                printf(" %d^2 +",i);
        sum = sum + i*i;
    }
    printf(" = SUM : %d",sum);

    return 0;
}
