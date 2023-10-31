#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * str_concat - concat 2 strings
 * @s1: first string
 * @s2: second string
 * Return: pointer to the newly allocated space
 * that contains s1 + s2 and null terminated
 * On failure, return NULL
 */
char *str_concat(char *s1, char *s2)
{
	unsigned int i, j, len = 0;
	char *final_string;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	final_string = malloc(sizeof(s1) + sizeof(s2) + 1);
	if (final_string == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
		final_string[i] = s1[i];
		len++;
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
		final_string[len] = s2[j];
		len++;
	}
	final_string[len] = '\0';
	return (final_string);
	free(final_string);
}
