//Write a C Program to take input N size array and print reverse array.

#include<stdio.h>
struct arr
{
    int shan[10];
    int n;
}rev ;
int main()
{
    int i;
    printf("Enter how many elements you want put : ");
    scanf("%d",&rev.n);
    printf("Enter the elements of the array : ");
    for(i=0; i<rev.n; i++)
    {
        scanf("%d",&rev.shan[i]);
    }
    for(i=(rev.n-1); i>=0; i--)
    {
        printf("%d ",rev.shan[i]);
    }


    return 0;
}
