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
	int i = 0;

	while (i < 4000000)
	{
		if (n1 % 2 == 0)
		{
			sum += n1;
		}
		else
		{
			n3 = n1 + n2;
			n1 = n2;
			n2 = n3;
		}
		i++;
	}
	printf("%ld \n", sum);
	return (0);
}

