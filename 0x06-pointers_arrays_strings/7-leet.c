#include "main.h"
/**
 * *leet - encodes a string into 1337
 * @s: string to encode
 * Return: encoded string
 */

char *leet(char *s)
{
	char *myString = s;
	char *letters = "aAeEoOtTlL";
	char *leets = "4433007711";
	char *p, *q;

	while (*s)
	{
		p = letters;
		q = leets;

		while (*p)
		{
			if (*s == *p)
			{
				*s = *q;
				break;
			}
			p++;
			q++;
		}
		s++;
	}

	return (myString);
}
