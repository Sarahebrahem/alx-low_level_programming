#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * count_words - counts the number of words in a string
 * @str: the string to count words in
 * Return: the number of words in the string
 */
int count_words(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}
	return (count);
}
/**
 * strtow - splits a string into words
 * @str: the string to split
 * Return: a pointer to an array of strings (words), or NULL on failure
 */
char **strtow(char *str)
{
	char **words;
	int i, j, k, n, count = 0;

	if (str == NULL || *str == '\0')
		return (NULL);
	count = count_words(str);
	words = malloc(sizeof(char *) * (count + 1));
	if (words == NULL)
		return (NULL);
	for (i = 0, k = 0; i < count; i++, k++)
	{
		while (str[k] == ' ')
			k++;
		n = 0;
		for (j = k; str[j] != ' ' && str[j] != '\0'; j++)
			n++;
		words[i] = malloc(sizeof(char) * (n + 1));
		if (words[i] == NULL)
		{
			for (j = 0; j < i; j++)
				free(words[j]);
			free(words);
			return (NULL);
		}
		for (j = 0; j < n; j++)
			words[i][j] = str[k++];
		words[i][j] = '\0';
	}
	words[count] = NULL;
	return (words);
}
