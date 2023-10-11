#include "main.h"
/**
 * times_table - print the 9 times table starting with 0
 */
void print_times_table(int n)
{
	int i, j, val;
	if (n <= 15 && n > 0)
	{	
		for (i = 0; i <= n; i++)
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
					if (j < n)
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

}
