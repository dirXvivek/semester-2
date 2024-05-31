// write a program to check given number is perfect number or not
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, s = 0, i = 1;
    printf("Enter the number: ");
    scanf("%d", &n);
    while (i < n)
    {
        if (n % i == 0)
        {
            s = s + i;
        }
        i++;
    }
    if (s == n)
        printf("Perfect Number");
    else
        printf("!Perfect Number");

    getch();
}