#include<stdio.h>
int main()
{
    char ch,a[100];

    int i,vowel,consonant,digit,words,other;

    i=vowel=consonant=digit=other=0;

    words=1;

    printf("Enter any sentence : ");
    gets(a);

    for(i=0; (ch=a[i])!='\0'; i++)
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vowel++;
        else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z'))
            consonant++;
        else if(ch>='0' && ch<='9')
            digit++;
        else if(ch==' ')
            words++;
        else
            other++;

    }

    printf("Number of Vowel = %d\n",vowel);
    printf("Number of Consonant = %d\n",consonant);
    printf("Number of Digits = %d\n",digit);
    printf("Number of Words = %d\n",words);
    printf("Number of Other = %d\n",other);

return 0;
}
