#include<stdio.h>
int a=2;
int main()
{

    printf("Inside the main function a = %d\n",a);
    display ();
    getch();
}
void display()
{
    printf("Inside the display function a = %d",a+a);
}
