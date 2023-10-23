#include "main.h"
/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer; whose value should be set to a char
 * @to: pointer to the char 
 */

void set_string(char **s, char *to)
{
	*s = to;
}
