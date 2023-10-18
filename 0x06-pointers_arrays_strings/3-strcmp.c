#include "main.h"
/**
 * _strcmp - compare 2 strings
 * @s1 : string one
 * @s2: string 2
 * Return: 0 if both strings are identical,
 * else return int representing the difference between the 2 strings
 */

int _strcmp(char *s1, char *s2)
{
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
