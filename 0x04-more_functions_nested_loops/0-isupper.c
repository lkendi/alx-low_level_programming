#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c:  char to check if uppercase or not
 *
 * Return: 1 if c is uppercase, else return 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
