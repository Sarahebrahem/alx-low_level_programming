#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_range - Creates an array of integers
 * @min: Minimum value in the array (included)
 * @max: Maximum value in the array (included)
 *
 * Return: Pointer to the newly created array, NULL if failed
 */
int *array_range(int min, int max)
{
	int *arr;
	int i, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		arr[i] = min + i;
	return (arr);
}
