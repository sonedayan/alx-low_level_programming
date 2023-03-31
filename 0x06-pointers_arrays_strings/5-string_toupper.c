#include "main.h"

/**
 * string_toupper - changes lowa to uppa case
 *
 * @t: pointer
 *
 * Return: t
 */

char *string_toupper(char *t)
{
	int a;

	a = 0;

	while (n[a] != '\0')
	{
		if (t[a] >= 'a' && t[a] <= 'z')
		{
			t[a] = t[a] - 32;
		}
		a++;
	}
	return (t);
}
