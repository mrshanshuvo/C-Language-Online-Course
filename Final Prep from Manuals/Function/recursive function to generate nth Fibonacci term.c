//Write a recursive function to generate nth Fibonacci term in C programming.

#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter the number to find Fibonacci term : ");
    scanf("%d",&num);
    fibo(i);
    printf("Fibonacci series of %dth term is : \n",num);
    for(i=0; i<num; i++)
    {
        printf("%d\n",fibo(i));
    }

    return 0;
}
int fibo(int num)
{
    if(num==0 || num ==1)
        return num;
    else
        return fibo(num-1)+fibo(num-2);
}
