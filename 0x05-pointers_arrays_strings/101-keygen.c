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
	int total = 3102;

	srand(time(NULL));
	for (i = 0; total > 102; i++)
	{
		random = (rand() % 125) + 1;
		/*printable ASCII values - 1 to 125*/ 
		printf("%c", random);
		total -= random;
	}
	printf("%c", total);
	return (0);
}
