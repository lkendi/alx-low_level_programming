#include "main.h"
/**
 * _strspn - gets the length of a prefix substring
 * @s: string
 * @accept: substring
 * Return: number of bytes in the initial segment of s
 * which consists only of bytes from accept
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	char *a;

	while (*s)
	{
		a = accept;

		while (*a)
		{
			if (*a == *s)
			{
				count++;
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			return (count);
		}

		s++;
	}
	return (count);

}
