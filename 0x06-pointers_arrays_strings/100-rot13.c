#include "main.h"
/**
 * *rot13 - encode a string usingrot13
 * @str: string to encode
 * Return: encoded string
 */

char *rot13(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z'))
		{
			*str += 13;


		}

		str++;
	}
	return (str);
}
