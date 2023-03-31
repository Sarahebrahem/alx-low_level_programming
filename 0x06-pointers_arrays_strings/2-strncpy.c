#include "main.h"
/**
 * _strncpy - Copies a string, up to n characters from src to dest
 *
 * @dest: Destination string
 * @src: Source string
 * @n: Maximum number of characters to copy from src
 *
 * Return: Pointer to resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
