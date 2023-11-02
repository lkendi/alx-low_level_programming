#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * string_nconcat - concatenates 2 strings
 * @s1: first string
 * @s2: second string
 * @n: no. of bytes of s2 to concat to s1
 * Return: ptr to final string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len = 0, len1 = 0;
	char *final_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[len1] != '\0')
	{
		len1++;
	}
	final_string = malloc(len1 + n + 1);
	if (final_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < len1; i++)
	{
		final_string[i] = s1[i];
		len++;
	}
	for (i = len1; i < len1 + n; i++)
	{
		final_string[i] = s2[i - len1];
		len++;
	}
	final_string[len] = '\0';
	return (final_string);
}
