//Write a C program to check a character is vowel or not.


#include<stdio.h>
struct vowel
{
    char ch;
}vo;
int main()
{
    printf("Enter any character : ");
    scanf("%c",&vo.ch);
    if(vo.ch=='a' || vo.ch =='e' || vo.ch=='i' || vo.ch =='o' || vo.ch=='u' || vo.ch =='A' || vo.ch=='E' || vo.ch=='I' || vo.ch=='O' || vo.ch =='U')
        printf("The character is Vowel");
    else
        printf("Consonant");


    return 0;
}
