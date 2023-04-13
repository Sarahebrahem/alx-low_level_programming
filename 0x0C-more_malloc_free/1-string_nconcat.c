#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - Concatenates two strings
 * @s1: String to be appended to
 * @s2: String to append
 * @n: Number of bytes from s2 to concatenate
 *
 * Return: Pointer, NULL if failed
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int s1_len = 0, s2_len = 0, i, j;
	char *concat_str;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[s1_len] != '\0')
		s1_len++;
	while (s2[s2_len] != '\0')
		s2_len++;
	if (n >= s2_len)
		n = s2_len;
	concat_str = malloc(sizeof(char) * (s1_len + n + 1));
	if (concat_str == NULL)
		return (NULL);
	for (i = 0; i < s1_len; i++)
		concat_str[i] = s1[i];
	for (j = 0; j < n; j++)
	{
		concat_str[i] = s2[j];
		i++;
	}
	concat_str[i] = '\0';
	return (concat_str);
}
