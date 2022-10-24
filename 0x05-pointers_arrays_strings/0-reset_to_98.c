#include <stdio.h>
#include "main.h"

/**
 * reset_to_98 - this function reset the number
 *
 * @n: is the pointer
 *
 * Return: Always 0
 */

void reset_to_98(int *n)
{
	int n = 98;
	int *p = &n;

	_putchar("%p\n", &n);

	return (0);
}

