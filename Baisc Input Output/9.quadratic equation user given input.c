#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,d,x1,x2;

    printf("enter values of a b c : ");
    scanf("%lf %lf %lf",&a,&b,&c);

    d = sqrt(b*b-4*a*c);

    x1 = (-b+d)/(2*a);
    x2 = (-b-d)/(2*a);

    printf("first root is : %lf\n",x1);
    printf("second root is : %lf",x2);

    return 0;
}
