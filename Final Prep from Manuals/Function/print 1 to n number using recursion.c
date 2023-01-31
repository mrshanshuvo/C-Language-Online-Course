#include<stdio.h>
void display(int);
int main()
{
    int num;

    printf("Enter the number of terms to be printed\n");
    scanf("%d", &num);

    printf("\nNatural Numbers from 1 To %d are : \n",num);
    display(num);

    return 0;
}
void display(int num)
{
    if(num>0)
        display(num-1);
    else
        return 0;
    printf("%d\n",num);
}
