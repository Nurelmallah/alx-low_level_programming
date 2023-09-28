#include "main.h"
#include <stdio.h>

/**
 * clear_bit - Clears the bit at a given index.
 * @n: Pointer to the decimal number to modify.
 * @index: The index of the bit to clear (starting from 0).
 *
 * Return: 1 if successful,
 * -1 if an error occurs (e.g., index is out of range).
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i;
	unsigned int hold;

	if (index > 63)
		return (-1);

	hold = index;
	for (i = 1; hold > 0; i *= 2, hold--)
		;

	if ((*n >> index) & 1)
		*n -= i;

	return (1);
}
