#include "main.h"
/**
 * *_strncat - concat 2 strings using at most n bytes from 2nd string
 * @dest: 1st string
 * @src: 2nd string to concat to first string
 * @n: max number of bytes from src to use
 * Return: pointer to the resulting string
 */

char *_strncat(char *dest, char *src, int n)
{
	char *result = dest;
	int len = 0;

	while (*dest != '\0')
	{
		dest++;
	}

	while (src[len] != '\0' && len < n)
	{
		*dest = src[len];
		dest++;
		len++;
	}
	*dest = '\0';
	return (result);
}
