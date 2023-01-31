#include<stdio.h>
void display(char st[])
{
    int i;
    for(i=0; st[i]!='\0'; i++)
    {
        printf("%c\n",st[i]);
    }
}
int main()
{
    char str[]="shahid hasan shuvo";

    display(str);


    return 0;
}
