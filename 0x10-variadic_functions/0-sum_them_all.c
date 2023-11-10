#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all parameters
 * @n: first number, which is a constant
 * @...: additional parameters
 * Return: the sum of all parameters or 0 if n == 0
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, num, sum = 0;
	va_list nums;

	if (n == 0)
	{
		return (0);
	}
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		sum += num;
	}
	va_end(nums);
	return (sum);
}
