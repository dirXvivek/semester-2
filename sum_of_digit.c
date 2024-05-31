// write a program to sum the number given by user
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, a, s = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        a = n % 10; // for fatching the remainder of the give number one by one
        s = s + a;  // sum the fatching remainder in initialize number s=0
        n = n / 10; // remove the digit from back one by one
    }
    printf("The sum of given number are %d", s);

    getch();
}