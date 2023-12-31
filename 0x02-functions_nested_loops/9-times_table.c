#include "main.h"
/**
 * times_table - print the 9 times table starting with 0
 */
void times_table(void)
{
	int i, j, val;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			val = i * j;
			if (j == 0)
			{
				_putchar(val + '0');
			}
			else if (val < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(val + '0');
			}
			else if (val >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
			}
		}
		_putchar('\n');
	}
}
