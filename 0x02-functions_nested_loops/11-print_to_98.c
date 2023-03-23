#include "main.h"

/**
 * print_to_98 - prints till 98
 *
 * @n: parameter
 *
 * Return: returns n
 */

void print_to_98(int n)
{
	int i;

	if (n >= 0 && n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			_putchar(i + '0');
			_putchar(',');
			_putchar(' ');
			_putchar('\n');
		}
		else if (n < 0)
		{
			for (i = n; i <= 98; i++)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
				_putchar('\n');
			}
		}
		else if (n > 98)
		{
			for (i = n; i >= 98; i--)
			{
				_putchar(i + '0');
				_putchar(',');
				_putchar(' ');
				_putchar('\n');
			}
		else if (n == 98)
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');

}
