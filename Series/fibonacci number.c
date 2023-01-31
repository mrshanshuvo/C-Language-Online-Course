#include<stdio.h>
int main()
{
    int n,first=0,i=0,second=1,fibo;
    printf("Enter the range : ");
    scanf("%d",&n);
    while(i<n)
    {
        if(i<=1)
            fibo = i;
        else
        {
            fibo = first + second;
            first = second;
            second = fibo;
        }

        printf("%d ",fibo);
        i++;

    }

    return 0;
}
