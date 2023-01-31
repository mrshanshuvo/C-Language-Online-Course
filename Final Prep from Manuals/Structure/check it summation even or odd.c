//Create a structure and declare 2 local variable and check it summation even or odd.

#include<stdio.h>
struct sum
{
    float n1,n2;
};
int main()
{
    struct sum n;
    int add;
    printf("Enter the n1: ");
    scanf("%f",&n.n1);
    printf("Enter the n2 : ");
    scanf("%f",&n.n2);

    add = n.n1 + n.n2;

    printf("SUM : %d",add);

    if(add%2==0)
        printf("\nEVEN\n");
    else
        printf("\nODD\n");

    return 0;
}
