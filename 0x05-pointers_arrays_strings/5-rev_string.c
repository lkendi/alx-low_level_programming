#include "main.h"
/**
 * rev_string - reverse a string
 * @s: string to reverse
 */

void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char temp;

	while (*end != '\0')
	{
		end++;
	}
	end--; /*last non-null character in the string*/

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}
