#include <stdio.h>

/**
 * main - main function
 *
 * Return: void
 */

int main(void)
{
	for (i = 'a'; i <= 'z'; i++)
		if (i != 'q' && i != 'e')
			putchar(i);
	putchar('\n');
	return (0);
}
