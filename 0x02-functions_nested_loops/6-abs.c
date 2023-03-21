#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @n: the int to check
 * Return: the absolute value of int
 */
int _abs(int n)
{
if (n >= 0)
{
return (n);
}
else
{
return (n * -1);
}
}
