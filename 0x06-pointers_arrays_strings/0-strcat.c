#include "main.h"
/**
 * *_strcat - concat 2 strings
 * @dest: first string
 * @src: string to concat to dest
 * Return: pointer to the resulting string
 */

char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
