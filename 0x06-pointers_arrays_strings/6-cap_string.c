#include "main.h"

/**cap_string - capitalize string
 *
 * @str: string
 *
 * Return: str
 */

char *cap_string(char *str)
{
	int pointer = 0;

	while (str[pointer])
	{
		while (!(str[pointer] >= 'a' && str[pointer] <= 'z'))
			pointer++;
		if (str[pointer - 1] == ' ' || str[pointer - 1] == '\t' || str[pointer - 1] == '\n' || str[pointer - 1] == ',' || str[pointer - 1] == ';' || str[pointer - 1] == '.' || str[pointer - 1] == '!' || str[pointer - 1] == '?' || str[pointer - 1] == '"' || str[pointer - 1] == '(' || str[pointer - 1] == ')' || str[pointer - 1] == '{' || str[pointer - 1] == '}' pointer == 0)
			str[pointer] -= 32;
		pointer++;
	}

	return (str);
}
