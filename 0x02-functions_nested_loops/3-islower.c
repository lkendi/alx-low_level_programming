#include "main.h"
/**
 * is_lower - check if letter is lowercase
 * @c - ascii value of character to check
 *
 * Return: 1 if c is lowercase, otherwise 0
 */
int _islower(int c)
{
	if (int c < 97 && c > 127)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
