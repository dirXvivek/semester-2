// write a program to check given number are armstrong or not
#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
    int n, d = 0, s = 0, t, m, a;
    printf("Enter the number: ");
    scanf("%d", &n);
    t = n; // we intialize new var bez at last n will be zero
    m = n; // so we can compair given value to new value
    while (n != 0)
    {
        a = n % 10;
        d = d + 1; // counting the digit
        n = n / 10;
    }
    while (t != 0)
    {
        a = t % 10;
        s = s + pow(a, d);
        t = t / 10;
    }

    if (m == s)
        printf("Armstrong");
    else
        printf("!Armstrong");

    getch();
}