//Write a C Program to Find the Frequency of Characters in a String.

#include<stdio.h>
int main()
{
    char shan[20],ch;
    int i,count;
    printf("Enter any sentence : ");
    gets(shan);

    for(ch='a'; ch<='z'; ch++)
    {
        count=0;
        for(i=0; shan[i]!=NULL; i++)
        {
            if(ch==shan[i])
            count++;
        }
        if(count>0)
            printf("%c is %d times\n",ch,count);
    }

    return 0;
}
