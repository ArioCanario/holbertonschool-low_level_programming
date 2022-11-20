#include "main.h"

/**
  * flip_bits - Checks bit by bit two numbers
  * Return: Number of bits to change to the numbers be the same
  * @n: Number
  * @m: Number
  */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count = 0;
	unsigned long int i = n ^ m;

	while (i)
	{
		count += i & 1;
		i = i >> 1;
	}
	return (count);

}

