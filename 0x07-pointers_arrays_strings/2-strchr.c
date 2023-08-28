#include "main.h"

/**
 * _strspn - calculates the length of a matching prefix
 * @s: the string to search
 * @accept: the characters to match in s
 *
 * Return: number of characters at the start of s that match those in accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int i, j, matched, found;

	matched = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		found = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				matched++;
				found = 1;
			}
		}
		if (found == 0)
		{
			return (matched);
		}
	}

	return (0);
}

