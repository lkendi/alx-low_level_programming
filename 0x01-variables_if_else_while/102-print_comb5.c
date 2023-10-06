#include <stdio.h>
/**
 *main - prints all possible combinations of two two-digit numbers
 *in ascending order ranging from 0 to 99 separated by a space;
 *The combination of numbers must be separated by comma, followed by a space
 *00 01 and 01 00 are considered as the same combination of the numbers 0 and 1
 *You can only use putchar eight times maximum in your code
 *You are not allowed to use any variable of type char
 *All your code should be in the main function main - entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n1, n2;

	for (n1 = 0; n1 <= 99; n1++)
	{
		for (n2 = 0; n2 <= 99; n2++)
		{
			if (n1 != n2 && n1 < n2)
			{
				putchar('0' + (n1 / 10));
				putchar('0' + (n1 % 10));
				putchar(' ');
				putchar('0' + (n2 / 10));
				putchar('0' + (n2 % 10));

			if (n1 != 98 || n2 != 99)
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
