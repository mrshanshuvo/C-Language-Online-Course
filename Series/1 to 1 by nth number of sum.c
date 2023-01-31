#include<stdio.h>
int main()
{
    float i,n,sum=0;
    printf("Enter any integer : ");
    scanf("%f",&n);

    for(i=1;i<=n;i++)
    {
        if(i==1)
            printf("%f +",i);
        else if(i==n)
            printf(" 1/%.2f",i);
        else
            printf(" 1/%.2f +",i);
        sum = sum + (1/i);
    }
    printf(" = SUM is : %.2f",sum);


    return 0;
}
