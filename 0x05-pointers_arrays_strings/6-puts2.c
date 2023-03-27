#include "main.h"
/**
 * puts2 - Prints every other character of a string, starting with the first
 * character, followed by a new line
 * @str: String to print characters from
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	if (str == NULL)
	{
		return;
	}
	for (i = 0; str[i] != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
