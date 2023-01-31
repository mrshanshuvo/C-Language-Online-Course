#include<stdio.h>
int main()
{
    int digit;
    printf("enter any digit from 1-9 : ");
    scanf("%d",&digit);

    switch(digit)
    {
    case 0:
        printf("ZERO\n");
    case 1:
        printf("ONE\n");
    case 2:
        printf("TWO\n");
    case 3:
        printf("THREE\n");
    case 4:
        printf("FOUR\n");
    case 5:
        printf("FIVE\n");
    case 6:
        printf("SIX\n");
    case 7:
        printf("SEVEN\n");
    case 8:
        printf("EIGHT\n");
    case 9:
        printf("NINE\n");
    default:
        printf("Not a valid digit");
    }


    return 0;
}
