#include "main.h"
/**
 * _strcpy - copy string pointed to by src to buffer pointed to by dest
 * @dest: destination to copy the string
 * @src: initial pointer to the string
 * Return: pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	char *s = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (s);
}
