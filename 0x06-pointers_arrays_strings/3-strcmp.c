#include "main.h"

/**
 * _strcmp - compare 2 strings
 *
 * @s1: string one
 *
 * @s2: string two
 *
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int f;

	f = 0;

	while (s1[f] != '\0' && s2[f] != '\0')
	{
		if (s1[f] != s2[f])
		{
			return (s1[f] - s2[f]);
		}
		f++;
	}
	return (0);
}
