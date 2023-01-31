#include <stdio.h>
int main()
{
    int a[10],b[10],i,j,n,c=0;
    printf("Enter how many elements you want to put : ");
    scanf("%d",&n);
    printf("Enter the elements : ");
    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for(i=0; i<n; i++)
    {
        c=1;
        {
            for(j=i+1; j<n; j++)
            {
                if (a[i]==a[j])
                {
                    c++;
                    a[j]=-1;
                }
                b[i]=c;
            }
        }

    }
    for(i = 0; i < n; i++)
    {
        if(a[i]>0)
        {
            printf("%d is %d times available \n", a[i],b[i]);
        }
    }
    return 0;
}
