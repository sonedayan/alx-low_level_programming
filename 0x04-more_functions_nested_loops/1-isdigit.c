#include "main.h"

/**
 * _isdigit - function checks for digit
 *
 * @c: parameter to be checked
 *
 * Return: 1 for digit, 0 for else
 */

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
