#include "main.h"
/**
 * _strcpy - function that copies the string pointed to by src
 * @dest: pointer to the buffer to copy the string to
 * @src: pointer to the string to be copied
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + 1) != '\0')
	{
		l++;
	}
	for ( ; x < l; x++)
	{
		dest[x] = src[x];
	}
	dest[1] = '\0';
	return (dest);
}
