#include<stdio.h>
int main()
{
    char as[]="shahid hasan shuvo";
    int i,count=0;

    for(i=0; as[i]!='\0'; i++)
    {
        count++;
    }
    printf("%d\n",count);


    return 0;
}
