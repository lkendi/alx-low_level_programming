#include "main.h"
/**
 * puts2 - prints every other character of a string starting with the 1st;
 * @str: string to print
 */

void puts2(char *str)
{
	while (*str != '\0')
	{
		if (*str == '\0')
		{
			break;
		}
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}
