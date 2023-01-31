#include<stdio.h>
int main()
{
    while(1)
    {
    int n,temp,rem,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    temp = n;
    while(n!=0)
    {
        rem = n%10;
        sum = sum + rem*rem*rem;
        n = n/10;
    }
    if(temp==sum)
        printf("IT'S AN ARMSTRONG NUMBER\n");
    else
        printf("IT'S NOT AN ARMSTRONG NUMBER\n");
    }
    return 0;
}
