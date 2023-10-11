#include <unistd.h>
/**
 * main - function to print _putchar
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	write(1, "_putchar\n", sizeof("_putchar\n"));
	return (0);
}
