#include "main.h"

/**
 * _strspn - calculates the length of a prefix substring
 * @s: the string to be evaluated
 * @accept: the string containing the characters to match in s
 *
 * Return: the number of bytes in the initial segment
 * of s that consist of characters from accept
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
