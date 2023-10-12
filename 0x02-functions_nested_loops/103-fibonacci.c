#include <stdio.h>
/**
 * main - sum of even values in fibonacci series
 *
 * Return: Always 0
 */
int main(void)
{
	long n1 = 1;
	long n2 = 2;
	long n3;
	long sum = 0;

	while (n1 <= 4000000)
	{
		if (n1 % 2 == 0)
		{
			sum += n1;
		}
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
	}
	printf("%ld \n", sum);
	return (0);
}

