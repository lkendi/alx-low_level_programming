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
		write(1, &(-i), 1);	
	}
	else
	{
		write(1, &i, 1);
	}

	return (0);
}

