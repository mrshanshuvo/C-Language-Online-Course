#include<stdio.h>
int main()
{
    int i,n,sum=0;
    printf("Enter value of n : ");
    scanf("%d",&n);

    for(i=2;i<=n;i=i+2)
    {
        printf("%d ",i);
        sum = sum + i;
    }
    printf("= SUM is : %d",sum);

    return 0;
}
