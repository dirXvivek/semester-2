// write a program to print reverse of a number
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, a, s = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        a = n % 10;       // fatching the remainder of the given nubmer
        s = (s * 10) + a; // add the fatching remainder in the "s" variable
        n = n / 10;       // removing the number from back one by one
    }
    printf("The reverse of the given number are %d", s);
    getch();
}