#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, j, n1, n2;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			n1 = i * 10 + j;
			n2 = j * 10 + i;

			if (i != j && n1 < n2)
			{
				putchar('0' + i);
				putchar('0' + j);

				if (i != 8 || j != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
