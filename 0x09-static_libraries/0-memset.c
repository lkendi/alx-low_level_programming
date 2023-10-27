#include "main.h"
/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to memory area to be filled
 * @b: constant byte to fill
 * @n: number of bytes to fill
 * Return: pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *start = s;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*s = b;
		s++;
	}
	return (start);
}
