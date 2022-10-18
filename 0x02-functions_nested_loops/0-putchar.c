#include <stdio.h>

/**
 * main - Programs entry point
 *
 * Description: prints _putchar
 *
 * Return: 0 (success)
 */
int main(void)
{
	char text[9] = "_putchar";
	int i = 0;

	for (i = 0; i < 8; i++)
	{
		-putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
