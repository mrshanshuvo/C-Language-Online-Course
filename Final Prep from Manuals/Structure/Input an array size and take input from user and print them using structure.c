//Input an array size and take input from user and print them using structure C programming.


#include<stdio.h>
struct shan
{
    int a[100];
    int n;
};
struct shan v1;
int main()
{
    int i;

    printf("Enter how many numbers you want put :  ");
    scanf("%d",&v1.n);

    for(i=0; i<v1.n; i++)
    {
        scanf("%d",&v1.a[i]);
    }
    for(i=0; i<v1.n; i++)
    {
        printf("%d ",v1.a[i]);
    }
}
