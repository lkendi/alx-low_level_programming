#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: number passed to the function
 *
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;
	char last;

	if (last_digit < 0)
	{
		last_digit = -last_digit;
	}

	/*convert digit to ascii value to print using _putchar*/

	last = '0' + last_digit;

	_putchar(last);
	return (last_digit);
}
