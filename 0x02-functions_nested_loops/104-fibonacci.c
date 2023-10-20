i#include <stdio.h>
/**
 * main - first 98 fibonacci numbers
 *
 * Return: Always 0
 */
int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long n3;
	int i;

	for (i = 1; i <= 98; i++)
	{
		printf("%ld", n1);

		n3 = n1 + n2;
		n1 = n2;
		n2 = n3;
		if (i != 98)
		{
			printf(", ");
		}
	}
	printf("\n");
	return (0);
}

