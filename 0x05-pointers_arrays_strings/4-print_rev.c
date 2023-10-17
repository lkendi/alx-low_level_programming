#include "main.h"
/**
 * print_rev - print a string in reverse followed by a new line
 * @s: string to reverse
 */

void print_rev(char *s)
{
	char *e;

	e = s; /*first, e points to the start of the string*/
	while (*e != '\0')
	{
		e++;
	}
	/*now, e points to the end of the string*/

	while (e != s)
	{
		e--;
		_putchar(*e);
	}
	_putchar('\n');
}
