#include "main.h"

/**
 * _atoi - function to convert string to integer
 *
 * @s: parameter passed
 *
 * Return: integer
 */

int _atoi(char *s)
{
	int i;
	int x;
	int y;
	int length;
	int z;
	int num;

	i = 0;
	x = 0;
	y = 0;
	length = 0;
	z = 0;
	num = 0;

	while (s[length] != '\0')
		length++;
	while (i < length && z == 0)
	{
		if (s[i] == '-')
			++x;
		if (s[i] >= '0' && s[i] <= '9')
		{
			num = s[i] - '0';
			if (x % 2)
				numm = -num;
			y = y * 10 + num;
			z = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			z = 0;
		}
		i++;
	}
}
