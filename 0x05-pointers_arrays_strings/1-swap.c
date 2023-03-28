#include "main.h"

/**
 * swap_int - function swaps value of 2 ints
 *
 * @a: first int to swap
 *
 * @b: second int to swap
 */

void swap_int(int *a, int *b)
{
	int counter;

	counter = *a;
	*a = *b;
	*b = counter;
}
