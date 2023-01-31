#include<stdio.h>
int main()
{
    while(1)
    {
    int i,n,count=0;
    printf("Enter any number : ");
    scanf("%d",&n);

    for(i=2;i<n;i++)
    {
        if (n%i==0)
            count++;
            break;
    }
    if(count == 0)
        printf("PRIME NUMBER\n");
    else
        printf("NOT PRIME NUMBER\n");
    }
    return 0;
}
