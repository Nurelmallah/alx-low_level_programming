#include "main.h"
#include <stdio.h>

/**
 * get_bit - Get the value of a bit at a given index.
 * @n: The number to evaluate.
 * @index: The index, starting from 0, of the bit to retrieve.
 *
 * Return: The value (0 or 1) of the bit at the specified index, or -1 if an
 *         error occurs (e.g., if the index is out of range).
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int hold;

	if (index > 63)
		return (-1);

	hold = n >> index;

	return (hold & 1);
}
