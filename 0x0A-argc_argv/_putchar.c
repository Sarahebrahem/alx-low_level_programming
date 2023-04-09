#include <stdio.h>
#include "main.h"
/**
 * _putchar - write c to stdout
 * @c: character to print
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
