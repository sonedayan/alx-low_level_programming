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
	int i;

	if (dest == NULL)
		return (NULL);
	for (i = 0; src[i] != '\0'; i++)
		dest[i] = src[i];
	return (dest);
}
