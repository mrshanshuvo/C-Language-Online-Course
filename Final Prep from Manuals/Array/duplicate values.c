#include<stdio.h>
int main()
{
    int i,j,n,a[10],c=0;
    printf("Enter how many elements you want to put : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    //for duplicate check
    for(i=0; i<n; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if (a[i]==a[j])
            {
                c++;
                break;
            }
        }
    }
    printf("there are %d types duplicate values ",c);

    return 0;
}
