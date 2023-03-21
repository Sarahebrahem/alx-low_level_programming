#include <stdio.h>
#include "main.h"
/**
 * print_sign -  function that prints the sign of a number
 * @n: the int to be checked
 * Return: 1 if n is greater than zero, 0 if n is zero, -1 otherwise.
 */
int print_sign(int n)
{
if (n > 0)
{
printf("+");
return (1);
}
else if (n == 0)
{
printf("0");
return (0);
}
else
{
printf("-");
return (-1);
}
}
