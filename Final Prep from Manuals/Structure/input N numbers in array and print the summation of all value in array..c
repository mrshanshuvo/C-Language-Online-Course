//Write a C program for input N numbers in array and print the summation of all value in array.


#include<stdio.h>
struct arr
{
    int shan[100];
    int n;
}v1;
int main()
{
    int i,sum=0;
    printf("Enter how many numbers you wish to put : ");
    scanf("%d",&v1.n);
    printf("Enter the elements of the array : ");
    for(i=0; i<v1.n; i++)
    {
        scanf("%d",&v1.shan[i]);
    }

    for(i=0; i<v1.n; i++)
    {
        sum = sum + v1.shan[i];
    }

    printf("Sum of every elements of the array is : %d",sum);

    return 0;
}
