#include "main.h"

/**
 * print_rev - function reverses a string
 *
 * @s: parameter passed
 *
 * Return: 0
 */

void print_rev(char *s)
{
	int str_len = 0;
	int rev;

	while (*s != '\0')
	{
		str_len++;
		s++;
	}
	s--;
	for (rev = str_len; rev > 0; rev--)
	{
		_putchar(*s);
		s--;
	}

	_putchar('\n');
}
