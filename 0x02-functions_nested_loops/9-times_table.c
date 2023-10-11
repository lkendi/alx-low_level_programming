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
			if (val > 9)
			{
				_putchar((val / 10) + '0');
				_putchar((val % 10) + '0');
			
				if (j < 9)
				{
					{
                                	        _putchar(',');
                                        	_putchar(' ');
                                	}
				}
			}
			else
			{
				_putchar(val + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}

}
