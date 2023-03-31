#include "main.h"
/**
 * _strcat - Concatenates two strings
 * @dest: Destination string
 * @src: Source string
 *
 * Return: Pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int dest_len = 0, i = 0;

	while (dest[dest_len] != '\0')
	{
		dest_len++;
	}
	while (src[i] != '\0')
	{
		dest[dest_len] = src[i];
		i++;
		dest_len++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

