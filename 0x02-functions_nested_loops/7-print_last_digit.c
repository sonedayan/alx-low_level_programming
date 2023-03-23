#include "main.h"

/**
 * print_last_digit - prints the last digit
 *
 * @a: parameter needed
 *
 * Return: returns b
 */

int print_last_digit(int a)
{
	int b;

	b = a % 10;

	if (a < 0)
		b = -b;
	return (b);
}
