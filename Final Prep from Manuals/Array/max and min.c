#include<stdio.h>
int main()
{
    int i,n,a[10];
    printf("Enter how many elements you want to put : ");
    scanf("%d",&n);
    printf("Enter the values : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max = a[0];
    for(i=0; i<n; i++)
    {
        if(max < a[i])
        {
            max = a[i];
        }
    }
    printf("max = %d\n",max);

    int min = a[0];
    for(i=0; i<n; i++)
    {
        if(min > a[i])
        {
            min = a[i];
        }
    }
    printf("\nmin = %d\n",min);

    return 0;
}
