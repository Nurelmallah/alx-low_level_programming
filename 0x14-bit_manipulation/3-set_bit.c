#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A decimal number passed by pointer.
 * @index: The index position to change, starting from 0.
 *
 * Return: 1 if it successfully sets the bit, -1 if an error occurs
 *         (e.g., if the index is out of range).
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;

	if (index > 63)
		return (-1);

	for (p = 1; index > 0; index--, p *= 2)
		;
	*n += p;

	return (1);
}
