#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point. Generate random valid passwords
 * Return: Always 0
 */
int main(void)
{
	int random, i;
	int total = 3002;

	srand(time(NULL));
	for (i = 0; total > 102; i++)
	{
		random = (rand() % 120) + 1;
		printf("%c", random);
		total -= random;
	}
	printf("%c", total);
	return (0);
}
