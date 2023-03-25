#include "main.h"

/**
 * print_line - printing a line
 *
 * @n: parameter required
 *
 * Return: returns void
 */

void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
		_putchar('_');
	_putchar('\n');
}
