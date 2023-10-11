#include "main.h"
/**
 * _abs - print the absolute value of an integer (without any sign)
 * @i: integer value passed to the function
 *
 * Return: Always 0;
 */
int _abs(int i)
{
	if (i < 0)
	{
		_putchar(-i);
	}
	else
	{
		_putchar(i);
	}

	return (0);
}

