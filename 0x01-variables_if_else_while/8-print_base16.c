#include <stdio.h>
/**
 * main - entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char a;

	for (i = 0; i <= 9; i++)
	{
		putchar('0' + i);
	}
	for (a = 'a'; a <= 'f'; a++)
	{
		putchar(a);
	}
	putchar('\n');
	return (0);
}
