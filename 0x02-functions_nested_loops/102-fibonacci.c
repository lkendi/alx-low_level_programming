#include <stdio.h>
/**
 * main - print first 50 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long n3;
	int i;

	for (i = 1; i <= 50; i++)
	{
		printf("%ld", n1);
		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
	}
	return (0);
}
