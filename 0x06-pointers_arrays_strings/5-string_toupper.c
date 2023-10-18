#include "main.h"
/**
 * *string_toupper - change all lowercase letters to uppercase
 * @s: lowercase charcater to change to uppercase
 * Return: uppercase characters
 */

char *string_toupper(char *s)
{
	int a = 0;

	while (s[a] != '\0')
	{
		if (s[a] >= 'a' && s[a] <= 'z')
		{
			s[a] -= 32;
		}

		a++;

	}
	return (s);
}
