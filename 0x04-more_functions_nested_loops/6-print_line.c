#include "main.h"
/**
 * print_line - Print a line of length n
 * @n: number of times to print underscore character to get the line
 */
void print_line(int n)
{
	int l;

	if (n > 0)
	{
		for (l = 0; l <= n; l++)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
