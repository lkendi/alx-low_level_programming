#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - entry point. Generate random valid passwords
 * Return: Always 0
 */
int main(void)
{
	int random;

	srand(time(NULL));
	random = rand();

	return (random);
}
