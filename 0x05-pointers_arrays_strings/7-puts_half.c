#include "main.h"

/**
 * puts_half - function puts half
 *
 * @str: parameter passed
 *
 * Return: void
 */

void puts_half(char *str)
{
	int i;
	int counter = 0;

	for (i = 0; str[i] != '\0'; i++)
		counter++;
	if (counter % 2 == 0)
	{
		for (i = counter / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
	else if (counter % 2 != 0)
	{
		for (i = (counter - 1) / 2; str[i] != '\0'; i++)
			_putchar(str[i]);
		_putchar('\n');
	}
}
