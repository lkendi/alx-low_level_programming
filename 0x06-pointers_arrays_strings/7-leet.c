#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	if (*s != '\0')
	{
		while (*s == 'a' || *s ==  'A')
		{
			*s = 4;
			s++;
		}
		while (*s == 'e' || *s == 'E')
		{
			*s = 3;
			s++;
		}
		while (*s == 'o' || *s == 'O')
		{
			*s = 0;
			s++;
		}
		while (*s == 't' || *s == 'T')
		{
			*s = 7;
			s++;
		}
		while (*s == 'l' || *s == 'L')
		{
			*s == 1;
			s++;
		}
	}
	return (s);
}





		s++;
	}
}
