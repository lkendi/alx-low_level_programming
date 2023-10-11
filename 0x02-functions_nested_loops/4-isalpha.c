#include "main.h"
/**
 * _isalpha - checks for alphabetic character
 * @c: ascii value of character to check
 * (either type out the actual ascii number or use the character itself)
 *
 * Return: 1 if c is a lower or uppercase letter, 0 otherwise
 */
int _isalpha(int c)
{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
