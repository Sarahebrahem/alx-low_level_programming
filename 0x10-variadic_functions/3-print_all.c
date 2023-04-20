#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - prints anything
 *
 * @format: a list of types of arguments
 * Return: void
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *str;
	char current_format;

	va_start(args, format);

	while (format && format[i])
	{
		current_format = format[i];

		switch (current_format)
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;

			case 'i':
				printf("%d", va_arg(args, int));
				break;

			case 'f':
				printf("%f", va_arg(args, double));
				break;

			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					str = "(nil)";
				printf("%s", str);
				break;

			default:
				break;
		}

		if (format[i + 1] && (current_format == 'c' ||
			current_format == 'i' ||
			current_format == 'f' ||
			current_format == 's'))
			printf(", ");

		i++;
	}

	va_end(args);

	printf("\n");
}
