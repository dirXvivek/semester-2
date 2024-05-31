// write a program to check given number is palindrom or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, a, s = 0, t;
    printf("Enter the number: ");
    scanf("%d", &n);
    t = n;         // assign the value of 'n' in new var 't'
    while (n != 0) // at last n var will be zero
    {
        a = n % 10;
        s = (s * 10) + a;
        n = n / 10;
    }
    if (s == t)
        printf("Palindrome");
    else
        printf("!Palindrome");

    getch();
}