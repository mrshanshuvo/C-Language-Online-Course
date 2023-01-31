#include<stdio.h>
void maximum(int b[10],int i,int n)
{
    int max=b[0];
    for(i=0; i<n; i++)
    {
        if(max < b[i])
        {
            max = b[i];
        }
    }
    printf("The maximum value is : %d\n",max);
}
void minimum(int b[10],int i, int n)
{
    int min=b[0];
    for(i=0; i<n; i++)
    {
        if(min > b[i])
        {
            min = b[i];
        }
    }
    printf("The minimum value is : %d\n",min);
}

int main()
{
    int i,n,a[10];

    printf("Enter the range of the array : ");
    scanf("%d",&n);

    printf("Enter the values of the array : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    maximum(a,i,n);
    minimum(a,i,n);
}
