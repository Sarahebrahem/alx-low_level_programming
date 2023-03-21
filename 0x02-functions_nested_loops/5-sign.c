#include "main.h"
#include <stdio.h>
/**
 * print_sign - function that prints the sign of a number.
 * @n: the int to be checked
 * Return: 1 for postive num, -1 for negative num and 0 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{
putchar(43);
return (1);
}
else if (n < 0)
{
putchar(45);
return (-1);
}
else
{
putchar(48);
return (0);
}
}
