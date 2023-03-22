#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - Entry point
 * Return: 0 (success)
 */
int main(void)
{
int a = 1, b = 2, c;
int i;
printf("%d %d, ", a, b);
for (i = 2; i < 98; i++)
{
c = a + b;
printf("%d, ", c);
a = b;
b = c;
}
printf("\n");
return (0);
}
