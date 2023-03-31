#include "main.h"

/**
 * _strncat - function concatenates 2 strings
 * @dest: destination string
 * @src: source string
 * @n: number of xters to append
 * Return: returns concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlength = 0;
	int srclength = 0;
	int b;

	for (b = 0; dest[b] != '\0'; b++)
		destlength++;
	for (b = 0; src[b] != '\0'; b++)
		srclength++;
	for (b = 0; b < n; b++)
		dest[destlength + b] = src[b];
	return (dest);
}
