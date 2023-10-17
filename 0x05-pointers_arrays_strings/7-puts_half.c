#include "main.h"
/**
 * puts_half - prints the last half of a string
 * @str: string input
 */

void puts_half(char *str)
{
	int len, half;
	char * start = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= len; /*reset pointer to the beginning*/

	if (len % 2 == 0)
	{
		half = len / 2;
	}
	else
	{
		half = (len - 1) / 2;
	}
	while (str[half] != '0')
	{
		_putchar(str);
		half++;
	}
}
