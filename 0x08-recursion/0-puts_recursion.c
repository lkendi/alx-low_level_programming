#include "main.h"
/**
 * _puts_recursion - recursively print a string
 * @s: string to print
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return (s);
	}

	_putchar(*s);
	_puts_recursion(s + 1);
}
