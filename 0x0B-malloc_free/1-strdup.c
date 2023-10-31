#include "main.h"
#include <stdlib.h>
#include <stddef.h>
/**
 * _strdup - returns pointer to a new string
 * which is a duplicate of the string str
 * @str: string given as the parameter
 * Return: NULL if str is null or insufficient memory
 * else return a pointer to the duplicated string
 */
char *_strdup(char *str)
{
	char *str_duplicate;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	str_duplicate = malloc(sizeof(str) + 1);
	if (str_duplicate == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < sizeof(str) + 1; i++)
	{
		str_duplicate[i] = str[i];
	}
	return (str_duplicate);
	free(str_duplicate);
}
