#include "main.h"
/**
 * wildcmp - compare 2 strings
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if the strings are identaical, else 0
 */

int wildcmp(char *s1, char *s2)
{
	/*if both strings are empty they're identical*/
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	/*
	 * if s2 has an asterisk
	 * Option 1:
	 * considering asterisk as an empty string
	 * Thus compares s1 with the rest of s2
	 *
	 * Option 2
	 * Compare the rest of s1 with s2
	 */
	if (*s2 == '*')
	{
		if (wildcmp(s1, s2 + 1))
		{
			return (1);
		}

		if (*s1 != '\0' && wildcmp(s1 + 1, s2))
		{
			return (1);
		}
		return (0);
	}
	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	return (0);
}
