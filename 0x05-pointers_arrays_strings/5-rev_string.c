#include "main.h"

/**
 * rev_string - reverse string
 *
 * @s: parameter
 *
 * Return: reversed string
 */


void rev_string(char *s)
{
	char reverse = s[0];
	int counter = 0;
	int iterator;

	while (s[counter] != '\0')
		counter++;
	for (iterator = 0; iterator < counter; iterator++)
	{
		counter--;
		reverse = s[iterator];
		s[iterator] = s[counter];
		s[counter] = reverse;
	}
}
