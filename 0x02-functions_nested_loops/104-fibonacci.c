#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int a = 1;
int b = 2;
int i;
int c;
printf("%d, %d, ", a, b);
for (i = 3; i <= 98; i++)
{
c = a + b;
printf("%d", c);
}
if (i < 98)
{
printf(", ");
a = b;
b = c;
}
printf("\n");
return (0);
}
