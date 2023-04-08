#include "main.h"
/**
 * _puts - prints a string
 * @s: input string to print
 *
 * Return: void
 */
void _puts(char *s)
{
	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}
