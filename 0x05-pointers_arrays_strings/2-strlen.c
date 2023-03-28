#include "main.h"

/**
 * _strlen - function finds string length
 *
 * @s: parameter passed
 *
 * Return: length
 */

int _strlen(char *s)
{
	int str_length = 0;

	while (*s != '\0')
	{
		str_length++;
		s++;
	}

	return (str_length);

}
