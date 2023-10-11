#include "main.h"
/**
 * _abs - print the absolute value of an integer (without any sign)
 * @i: integer value passed to the function
 *
 * Return: absolute value of the integer;
 */
int _abs(int i)
{
	if (i < 0)
	{
		return (-1 * i);
	}
	else if (i >= 0)
	{
		return i;
	}

}

