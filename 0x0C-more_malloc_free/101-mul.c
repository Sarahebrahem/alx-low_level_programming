#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
/**
 * print_error - prints an error message and exits with status 98
 */
void print_error(void)
{
	printf("Error\n");
	exit(98);
}
/**
 * check_num - checks if a string contains only digits
 * @num: string to check
 *
 * Return: 0 if the string contains only digits, otherwise 1
 */
int check_num(char *num)
{
	while (*num)
	{
		if (!isdigit(*num))
			return (1);
		num++;
	}
	return (0);
}
/**
 * multiply - multiplies two numbers and stores the result in a buffer
 * @num1: first number to multiply
 * @num2: second number to multiply
 * @result: buffer to store the result
 * @size: size of the buffer
 */
void multiply(char *num1, char *num2, char *result, int size)
{
	int i, j, carry, digit1, digit2, sum;

	for (i = 0; i < size; i++)
		result[i] = '0';

	for (i = 0; num1[i]; i++)
	{
		if (num1[i] == '0')
			continue;

		carry = 0;
		digit1 = num1[i] - '0';

		for (j = 0; num2[j]; j++)
		{
			if (num2[j] == '0')
				continue;

			digit2 = num2[j] - '0';
			sum = digit1 * digit2 + carry + (result[i + j] - '0');
			result[i + j] = sum % 10 + '0';
			carry = sum / 10;
		}

		if (carry)
			result[i + j] = carry + '0';
	}
}
/**
 * main - multiplies two positive numbers
 * @argc: number of command-line arguments
 * @argv: array of command-line arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
	char *num1, *num2, *result;
	int size, i;

	if (argc != 3)
		print_error();

	num1 = argv[1];
	num2 = argv[2];

	if (check_num(num1) || check_num(num2))
		print_error();

	size = strlen(num1) + strlen(num2) + 1;
	result = malloc(size * sizeof(char));

	if (result == NULL)
		print_error();

	multiply(num1, num2, result, size);

	for (i = size - 1; i >= 0; i--)
	{
		if (result[i] != '0')
			break;
	}

	if (i < 0)
		printf("0\n");
	else
	{
		result[i + 1] = '\0';
		printf("%s\n", result + (i - strlen(num1) - strlen(num2) + 2));
	}

	free(result);
	return (0);
}
