#include "main.h"
/**
 * _memset - fills memory with a constant byte
 * @s: pointer to the memory area to be filled
 * @b: the constant byte to be used
 * @n: number of bytes to fill
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	char *p = s;

	for (i = 0; i < n; i++)
	{
		p[i] = b;
	}
	return (s);
}