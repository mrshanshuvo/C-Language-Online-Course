#include<stdio.h>
int main()\
{
    int i,j,k,l,m,n,a[10],b[10],c[10],d[10];

    //for A
    printf("Enter how many elements you want to add in A : ");
    scanf("%d",&m);
    printf("Enter the elements in A : ");
    for(i=0; i<m; i++)
    {
        scanf("%d",&a[i]);
    }

    //for B
    printf("Enter how many elements you want to add in B : ");
    scanf("%d",&n);
    printf("Enter the elements in B : ");
    for(j=0; j<n; j++)
    {
        scanf("%d",&b[j]);
    }

    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            if(a[i]==b[j])
            {
                c[k] = a[i];
                k++;
            }
        }
    }

    printf("The INTERSECTION = %d",c[k]);
    for(i=0; i<k; i++)
        printf("%d ",c[i]);


    return 0;
}
