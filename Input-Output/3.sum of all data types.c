//sum of different integer numbers

#include<stdio.h>
int main()
{
    int a=23,b=32,c=34,sum1;
    float d= 46.25,e= 65.26,f= 469.26,sum2;
    double g= 12.3264,h=44785.2165,i=325.3265,sum3;
    char ch1= 'S',ch2= 'A';

    sum1 = a+b+c;
    sum2 = d+e+f;
    sum3 = g+h+i;

    printf("%d + %d + %d = %d\n\n",a,b,c,sum1);
    printf("%.3f + %.3f + %.3f = %.3f\n\n",d,e,f,sum2);
    printf("%lf + %lf + %lf = %lf\n\n",g,h,i,sum3);
    printf("%c  %c\n\n",ch1,ch2);

    return 0;
}
