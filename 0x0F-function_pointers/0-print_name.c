#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_name - Prints a name using a given printing function
 * @name: Pointer to the name string
 * @f: Pointer to a function that prints a string
 *
 * Description: This function takes a name string and a function pointer
 * as arguments, and uses the function pointer to print the name string.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	f(name);
}
