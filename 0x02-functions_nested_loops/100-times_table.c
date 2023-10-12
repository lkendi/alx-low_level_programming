#include "main.h"
/**
 * print_times_table - print the n times table starting with 0
 * @n: dimensions of times table
 */
void print_times_table(int n)
{
	int i, j, val;

	if (n <= 15 && n >= 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				if (j > 0)
				{
					_putchar(',');
					_putchar(' ');
				}
				val = i * j;
				if (val < 10)
				{
					_putchar(' ');
				}
				if (val >= 100)
				{
					_putchar((val / 100) + '0');
					val %= 100;
				}
				if (val >= 10)
				{
					_putchar((val / 10) + '0');
					val %= 10;
				}
					_putchar(val + '0');
				}
			}
			_putchar('\n');
	}
}

