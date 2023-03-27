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
	int t = 0;
	int longi = 0;
	int o;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		longi++;
	}
	t = longi - 1;
	for (o = 0; o <= t; o++)
	{
		if (o % 2 == 0)
		{
			_putchar(str[o]);
		}
	}
	_putchar('\n');
}
