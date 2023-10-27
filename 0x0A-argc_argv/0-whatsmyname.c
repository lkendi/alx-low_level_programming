#include <stdio.h>
/**
 * main - program that prints its name then newline
 * @argc: number of command line arguments used to compile the program
 * @argv: array containing the arguments
 * Return: 0
 */

int main(int argc, char **argv)
{
	(void)argc;
	printf("%s\n", argv[0]);
	return (0);
}
