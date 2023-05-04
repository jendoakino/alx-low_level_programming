#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index in a decimal number
 * @num: decimal number to search
 * @idx: index of the bit to get
 *
 * Return: value of the bit
 */

int get_bit(unsigned long int num, unsigned int idx)
{
	int bit_val;

	if (idx > 63)
	return (-1);

	bit_val = (num >> idx) & 1;

	return (bit_val);
}

