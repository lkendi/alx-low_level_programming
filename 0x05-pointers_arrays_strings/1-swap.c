#include "main.h"
/**
 * swap_int - swap the values of 2 integers
 * @a: fist integer
 * @b: second integer
 * Parameters *a and *b are pointers to the respective integers
 */

void swap_int(int *a, int *b)
{
	int *temp;

	temp = a;
	a = b;
	b = temp;
}
