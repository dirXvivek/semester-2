// gcd of 2 numbers
#include <stdio.h>
#include <conio.h>
void main()
{
    int a, b, c;
    printf("Enter the number of a & b: ");
    scanf("%d %d", &a, &b);
    while (a % b != 0)
    {
        c = a % b;
        a = b;
        b = c;
    }
    printf("GCD is %d", b);

    getch();
}