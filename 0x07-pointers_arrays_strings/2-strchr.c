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
	if (s == NULL)
	{
		return (NULL);
	}
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);
}
