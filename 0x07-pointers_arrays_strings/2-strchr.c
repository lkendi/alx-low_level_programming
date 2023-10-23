#include "main.h"
#include <stddef.h>
/**
 * *_strchr - locates a character in a string
 * @s: string to search
 * @c: character to locate in s
 * Return: pointer to the 1st occurrence of c in s
 * else return NULL
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s);
		}
	}
	return (NULL);
}
