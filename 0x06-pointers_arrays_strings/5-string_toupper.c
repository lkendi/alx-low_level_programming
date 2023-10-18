#include "main.h"
/**
 * *string_toupper - change all lowercase letters to uppercase
 * @c: lowercase charcater to change to uppercase
 */

char *string_toupper(char *c)
{
	while (*c != '\0')
	{
		if (*c > 96 && *c < 123)
		{
			*c -= 32;
		}

	}
	return (c);
}
