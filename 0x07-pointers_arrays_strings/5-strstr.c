#include "main.h"
/**
 * *_strstr - locates the first occurence of a substring
 * @haystack: string
 * @needle: substring to locate in string
 * Return: pointer to the beginning of the located substring
 * Else NULL (if substring not found)
 */

char *_strstr(char *haystack, char *needle)
{
	char *str, *sub;

	while (*haystack != '\0')
	{
		str = haystack;
		sub = needle;

		while (*sub == *str && *sub != '\0')
		{
			str++;
			sub++;
		}

		if (*sub == '\0')
		{
			return (haystack);
		}
		haystack++;

	}

	return (NULL);

}
