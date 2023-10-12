#include "main.h"
/**
 * print_triangle - print a triangle of specified size
 * @size: size of the triangle
 */
void print_triangle(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = n; j > 0; j--)
			{
				if (j <= i)
				{
					_putchar('#');
				}
				else
				{
					_putchar(' ');
				}
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
