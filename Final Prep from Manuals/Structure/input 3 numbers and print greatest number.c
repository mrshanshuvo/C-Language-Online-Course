//Write a C program for input 3 numbers and print greatest number

#include<stdio.h>
struct greatest
{
    int n1,n2,n3;
} num;
int main()
{
    printf("Enter three different numbers : ");
    scanf("%d %d %d",&num.n1,&num.n2,&num.n3);
    if(num.n1>num.n2 && num.n1>num.n3)
        printf("%d is the greatest",num.n1);

    else if(num.n2>num.n1 && num.n2>num.n3)
        printf("%d is the greatest",num.n2);

    else if(num.n3>num.n2 && num.n3>num.n1)
        printf("%d is the greatest",num.n3);
    else
        printf("All Are Equal");
}
