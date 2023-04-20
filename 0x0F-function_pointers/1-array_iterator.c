#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * array_iterator - Executes a function on each element of an array
 * @array: Pointer to the first element of the array
 * @size: Size of the array
 * @action: Pointer to a function that takes an int parameter
 *
 * Description: This function takes an array of integers
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
