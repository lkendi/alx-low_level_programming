#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints anything
 * @format: list of argument types passed to the function
 * c for char, i for integer, f for float, s for char *
 * Return: nothing
 */

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *separator = "";
	const char *current;

	va_start(args, format);
	while (format[i] && format)
	{
		current = &format[i];
		switch (*current)
		{
			case 'c':
				printf("%s%c", separator, va_arg(args, int));
				break;
			case 'f':
				printf("%s%f", separator, va_arg(args, double));
				break;
			case 'i':
				printf("%s%d", separator, va_arg(args, int));
				break;
			case 's':
				printf("%s%s", separator, va_arg(args, char*));
				break;
			default:
				i++;
				continue;
		}
		separator = ", ";
		i++;
	}
	va_end(args);
	printf("\n");
}
