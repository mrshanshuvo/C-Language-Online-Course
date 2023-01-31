#include<stdio.h>
int main()
{
    int num,sum=0,rem,temp,fac,i;
    printf("Enter any NUMBER : ");
    scanf("%d",&num);

    temp = num;

    while(temp!=0)
    {
        rem = temp % 10;

        fac = 1;
        for(i=1;i<=rem;i++)
        {
            fac = fac * i;
        }

        sum = sum + fac;
        temp = temp / 10;
    }

    if(sum == num)
        printf("%d is STRONG NUMBER",num);
    else
        printf("%d is NOT STRONG NUMBER",num);


    return 0;
}
