#include "main.h"
/**
 * *_strncpy - copies a specified number of chars from src to dest
 * @dest: destination string
 * @src: string containing chars to copy
 * @n: number of chars in src to copy to dest from src
 * Return: final string after copying
 */

char *_strncpy(char *dest, char *src, int n)
{
	int len;

	(for len = 0; len <= n; len++)
	{
		dest[len] = src[len];
	}
	*dest = '\0';
	return (dest);
}
