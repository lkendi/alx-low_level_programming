#include "main.h"
#include <stddef.h>
/**
 * *_strpbrk - locates the first occurence of a set of bytes in a string
 * @s: string to search
 * @accept: set of bytes to search for
 * Return: pointer to the byte in s that matches one of the bytes in accept
 * or NULL if no such byte is found
 */

char *_strpbrk(char *s, char *accept)
{
	char *set;

	while (*s != '\0')
	{
		set = accept;

		while (*set != '\0')
		{
			if (*s == *set)
			{
				return (s);
			}
			set++;
		}
		s++;
	}
	return (NULL);
}

