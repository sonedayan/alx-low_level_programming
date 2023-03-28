#include "main.h"

/**
 * _puts - string followed by new line
 *
 * @str: parameter passed
 */

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
		_putchar('\n');
}
