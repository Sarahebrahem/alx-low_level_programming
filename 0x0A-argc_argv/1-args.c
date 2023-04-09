#include <stdio.h>
#include "main.h"
/**
 * main - Entry point
 * @argc: The number of command-line arguments
 * @argv: An array of pointers to the command-line arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	int count;

	count = argc - 1;
	printf("%d\n", count);
	return (0);
}
