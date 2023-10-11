#include "main.h"
/**
 * _abs - print the absolute value of an integer (without any sign)
 * @i: integer value passed to the function
 *
 * Return: Always 0;
 */
int _abs(int i)
{
	char val;

	if (i < 0)
	{
		i = -i;.
	}
	 val = '0' + i;
	 _putchar(val);

	 return;
}

