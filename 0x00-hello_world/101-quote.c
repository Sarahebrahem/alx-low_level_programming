#include <unistd.h>
/**
 * main - Entry point
 * Return: 1 (Success)
 */
int main(void)
{
	write(STDERR_FILENO, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 60);
	return (1);
}
