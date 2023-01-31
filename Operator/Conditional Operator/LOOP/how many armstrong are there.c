#include<stdio.h>
int main()
{
    int initialNum,finalNum,rem,temp,i,sum=0;
    printf("Enter the initial value : ");
    scanf("%d",&initialNum);
    printf("Enter the final value : ");
    scanf("%d",&finalNum);

    for(i=initialNum;i<=finalNum;i++)
    {
        temp = i;
        while(temp!=0)
        {
            rem = temp%10;
            sum = sum + rem*rem*rem;
            temp = temp/10;
        }
        if(sum == i)
        {
            printf("%d\t",i);
        }
        sum = 0;
    }


    return 0;
}
