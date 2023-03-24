#include "main.h"

/**
 * positive_or_negative - functions prints +ve or -ve
 *
 * @i: parameter needed
 *
 * Return: returns void
 */

void positive_or_negative(int i)
{
	if (i < 0)
		printf("%d is negative\n", i);
	else
		printf("%d is positive\n", i);
}
