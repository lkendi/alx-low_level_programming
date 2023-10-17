#include "main.h"
/**
 * puts_half - prints the last half of a string
 * @str: string input
 */

void puts_half(char *str)
{
	int len = 0;
	int i, a;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		a = len / 2;
	}
	else
	{
		a = (len - 1) / 2 + 1;
	}
	for (i = a; i < len; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
