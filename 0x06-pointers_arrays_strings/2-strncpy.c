#include "main.h"

/**
 * _strncpy - copy a string
 *
 * @dest: destination
 *
 * @src: source
 *
 * @n: number of strings
 *
 * Return: destination
 */

char *_strncpy(char *dest, char *src, int n)
{
	int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
