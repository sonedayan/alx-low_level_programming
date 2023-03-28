#include "main.h"


/**
 * _strcpy - function copies string
 *
 * @dest: first parameter
 *
 * @src: second parameter
 *
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int i = 0;
	int x = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}
	for ( ; x < 1; x++)
	{
		dest[x] = src[x];
	}
	dest[i] = '\0';
	return (dest);
}
