#include "main.h"

/**
 * reverse_array - reverses an array of ints
 *
 * @a: array
 *
 * @n: elements
 *
 * Return: void
 */

void reverse_array(int *a, int n)
{
	int x;
	int b;

	for (x = 0; x < n--; x++)
	{
		b = a[x];
		a[x] = a[n];
		a[n] = b;
	}
}
