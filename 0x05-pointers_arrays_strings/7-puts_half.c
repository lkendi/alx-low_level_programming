#include "main.h"
/**
 * puts_half - prints the last half of a string
 * @str: string input
 */

void puts_half(char *str)
{
	int len;
	char *start = str;

	while (*str != '\0')
	{
		len++;
		str++;
	}

	str -= len; /*reset pointer to the beginning*/

	if (len % 2 == 0)
	{
		start += len / 2;
	}
	else
	{
		start += (len - 1) / 2;
	}
	while (*start != '0')
	{
		_putchar(*start);
		start++;
	}
}
