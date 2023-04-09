#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * get_coin_count - calculate the number of coins of a certain value needed
 * @amount: total amount to make change for
 * @coin_value: value of the coin
 *
 * Return: number of coins needed
 */
int get_coin_count(int amount, int coin_value)
{
	int coin_count = 0;

	while (amount >= coin_value)
	{
		amount -= coin_value;
		coin_count++;
	}
	return (coin_count);
}
/**
 * make_change - calculate the minimum number of coins needed to make change
 * @cents: total amount to make change for
 *
 * Return: minimum number of coins needed
 */
int make_change(int cents)
{
	int coin_count = 0;

	if (cents <= 0)
		return (0);

	coin_count += get_coin_count(cents, 25);
	coin_count += get_coin_count(cents, 10);
	coin_count += get_coin_count(cents, 5);
	coin_count += get_coin_count(cents, 2);
	coin_count += get_coin_count(cents, 1);
	return (coin_count);
}
/**
 * main - entry point for the program
 * @argc: number of command-line arguments
 * @argv: array of command-line argument strings
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
	int cents, coin_count;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);

	if (cents < 0)
	{
		printf("0\n");
		return (0);
	}
	coin_count = make_change(cents);
	printf("%d\n", coin_count);
	return (0);
}
