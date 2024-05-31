// write a program to check given number are prime or composite
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i, s = 0;
    printf("Enter the number: ");
    scanf("%d", &n);

    for (i = 2; i < n; i++)
    {
        // now here checking if given number is completely divided by 'i' or not; if yes then increment the value of 's'
        if (n % i == 0)
            s = s + 1;
    }
    if (s == 0)
        printf("Prime number");
    else
        printf("Composite Number");

    getch();
}