#include "main.h"
/**
 * print_square - print a square
 * @size: size of the square
 *
 * Return: Always 0
 */
int print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j < size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
	return (0);
}