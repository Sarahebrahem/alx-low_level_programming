#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int fib1 = 1, fib2 = 2, temp, i;
printf("%d, %d", fib1, fib2);
for (i = 3; i <= 50; i++)
{
temp = fib2;
fib2 += fib1;
fib1 = temp;
printf(", %d", fib2);
}
printf("\n");
return (0);
}
