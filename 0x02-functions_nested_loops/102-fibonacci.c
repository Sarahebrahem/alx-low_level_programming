#include <stdio.h>
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
long long fib1 = 1, fib2 = 2, fib;
int i;
printf("%lld, %lld", fib1, fib2);
for (i = 3; i <= 50; i++)
{
fib = fib1 + fib2;
printf(", %lld", fib);
fib1 = fib2;
fib2 = fib;
}
printf("\n");
return (0);
}
