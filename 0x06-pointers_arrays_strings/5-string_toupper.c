#include "main.h"
/**
 * *string_toupper - change all lowercase letters to uppercase
 * @s: lowercase charcater to change to uppercase
 * Return: uppercase characters
 */

char *string_toupper(char *s)
{
	while (*s != '\0')
	{
		if (*s > 96 && *s < 123)
		{
			*s -= 32;
		}

	}
	return (s);
}
