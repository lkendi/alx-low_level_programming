#include "main.c"
/**
 * *rot13 - encode a string usingrot13
 * @str: string to encode
 * Return: encoded string
 */

char *rot_13(char *str)
{
	char b;

	while (*str != '\0')
	{
		if ((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <='Z'))
		{
			*str += 13;


		}

		str++;

	}

}
