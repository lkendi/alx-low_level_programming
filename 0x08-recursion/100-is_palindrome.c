#include "main.h"
/**
 * _strlen_recursion - recursively find the length of a string
 * @s: string input
 * Return: length of the string s
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}

/**
 * palindrome_recursive - checks if string is palindrome
 * by comparing characters
 * @s: string to check
 * @start: start of string s
 * @end: end of string s
 * Return: 1 if s is a palindrome, else 0
 */

int palindrome_recursive(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}

	if (s[start] != s[end])
	{
		return (0);
	}
	return (palindrome_recursive(s, start + 1, end - 1));
}

/**
 * is_palindrome - checks if string is a palindrome
 * @s: string to check
 * Return: 1 if s is a palindrome, else 0
 */

int is_palindrome(char *s)
{
	int len = _strlen_recursion(s);

	return (palindrome_recursive(s, 0, len - 1));

}

