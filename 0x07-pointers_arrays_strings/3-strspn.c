#include "main.h"

/**
 * _strspn - Get the length of the initial substring matching characters.
 * @s: The string to evaluate.
 * @accept: The string containing characters to match in 's'.
 *
 * Return: The number of bytes in the beginning of 's' that consist
 * only of characters found in 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, length, found;

	length = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				length++;
				found = 1;
			}
		}
		if (found == 0)
		{
			return (length);
		}
	}

	return (0);
}
