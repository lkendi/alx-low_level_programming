#include "main.h"
#include <stddef.h>
/**
 * *_memcpy - copy memory area
 * @dest: destination
 * @src: source
 * @n: number of bytes to copy from source to destination
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *d = dest;
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*dest = *src;
		dest++;
		src++;
	}

	return (d);
}
