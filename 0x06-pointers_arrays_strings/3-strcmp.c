#include "main.h"
/**
 * _strcmp - Compares two strings character by character
 *
 * @s1: First string to compare
 * @s2: Second string to compare
 *
 * Return: 0 if s1 and s2 are equal,
 * a negative number if s1 is less than s2,
 * or a positive number if s1 is greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
		if (s1[i] == '\0')
			return (0);
		i++;
	}
	return (s1[i] - s2[i]);
}
