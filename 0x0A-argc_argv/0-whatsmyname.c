#include "main.h"
#include <stdio.h>

/**
 * main - Prints the name of the program
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	char *s;

	s = argv[argc - 1];
	printf("%s\n", s);

	return (0);
}
