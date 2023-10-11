#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number passed to the function, first printed number
 */
void print_to_98(int n)
{
	int i, k;

	if (n > 98)
	{
		for (i = n; i >= 98; i--)
		{
			printf("%d\n", i);
			if (i != 98)
			{
				printf(", ");
			}
		}
	}
	else
	{
		for (k = n; k <= 98; k++)
		{
			printf("%d\n", k);
			if (k != 98)
			{
				printf(", ");
			}
		}
	}
}

