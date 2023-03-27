#include "main.h"
/**
 * puts_half - Prints the second half of a string, followed by a new line
 * @str: String to print the second half of
 *
 * Return: void
 */
void puts_half(char *str)
{
	int len = 0, i, n;

	if (str == NULL)
	{
		return;
	}
	while (str[len] != '\0')
	{
		len++;
	}
	n = (len + 1) / 2;
	for (i = n; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
