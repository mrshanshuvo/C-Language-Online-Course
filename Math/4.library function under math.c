#include<stdio.h>
#include<math.h>
int main()
{
    double n,result;
    printf("enter any number : ");
    scanf("%lf",&n);

    result = sin(n);
    printf("the result is : %.2lf\n",result);
    result = cos(n);
    printf("the result is : %.2lf\n",result);


    return 0;
}
