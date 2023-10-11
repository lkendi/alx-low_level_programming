#include "main.h"
/**
 * jack_bauer- print every minute of the day
 */
void jack_bauer(void)
{
	int i, j;

	for (i = 0; i <= 23; i++)
	{
		for (j = 0; j <= 59; j++)
		{
			/*i - iterator for hours*/
			_putchar((i / 10) + '0'); /*first digit*/
			_putchar((i % 10) + '0'); /*last digit*/
			_putchar(':');

			/*j -iterator for minutes*/
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');

		}

	}
}
