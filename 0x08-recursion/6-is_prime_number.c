#include "main.h"
/**
 * check_prime - Helper function that checks if a number is prime recursively
 *
 * @n: The number to check
 * @i: The divisor to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int check_prime(int n, int i)
{
	if (n < 2)
		return (0);
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_prime(n, i + 1));
}

/**
 * is_prime_number - Checks if a given integer is a prime number
 *
 * @n: The integer to check
 *
 * Return: 1 if n is a prime number, 0 otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 2));
}
