#include "main.h"
#include <stdio.h>
/**
 * print_last_digit - prints the last digit of a number
 * @n: the int to check
 * Return: last_digit
 */
int print_last_digit(int n)
{
int a;
if (n < 0)
{
n = -n;
a = n % 10;
}
else if (a < 0)
{
a = -a;
_putchar(a + '0');
}
}
