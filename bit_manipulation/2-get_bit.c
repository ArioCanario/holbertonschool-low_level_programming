#include "main.h"

/**
 * get_bit - Gets the bit at a index
 * Return: Bit
 * @n: Number
 * @index: Index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	return ((n >> index) & 1);
}
