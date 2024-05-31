// write a program to product the number given by user
#include <stdio.h>
#include <conio.h>
void main()
{
    int n, a, p = 1;
    printf("Enter the number: ");
    scanf("%d", &n);

    while (n != 0)
    {
        a = n % 10; // for fatching the remainder of the give number one by one
        p = p * a;  // product the fatching remainder in initialize number p=1
        n = n / 10; // remove the digit from back one by one
    }
    printf("The product of the given number are %d", p);
    
    getch();
}