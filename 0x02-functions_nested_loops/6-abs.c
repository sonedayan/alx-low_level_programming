include "main.h"

/**
 * _abs - prints the absolute value
 *
 * @p: parameter needed
 *
 * Return: returns p
 */

int _abs(int p)
{
	if (p < 0)
		p = p * -1;
	else if (p >= 0)
		p = p;
	return (p);
}
