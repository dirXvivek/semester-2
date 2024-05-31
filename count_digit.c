// write a program to count number of digit given by user
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, a, s = 0;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (n != 0)
    {
        a = n % 10;
        s = s + 1; // always add one in the 's' var till n=0
        n = n / 10;
    }
    printf("The total digit in given number are %d", s);
    getch();
}