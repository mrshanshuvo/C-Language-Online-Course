#include<stdio.h>
int main()
{
    int i1=1,i2=2,n1,n2,sum=0;

    printf("Enter two values : ");
    scanf("%d %d",&n1,&n2);

    while(i1<=n1 && i2<=n2)
    {
        sum = sum + i1*i2;
        i1++;
        i2++;
    }
    printf("SUM is : %d",sum);



    return 0;
}
