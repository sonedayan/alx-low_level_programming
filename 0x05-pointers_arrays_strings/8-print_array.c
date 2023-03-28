#include "main.h"

/**
 * print_array - function prints array of n integers
 *
 * @a: first parameter
 *
 * @n: second parameter
 *
 * Return: returns void
 */

void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		if (i != n - 1)
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);
	}
	printf("\n");
}
