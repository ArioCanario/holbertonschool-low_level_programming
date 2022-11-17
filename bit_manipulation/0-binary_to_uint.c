#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * binary_to_uint - Converts a binary number to decimal
 * Return: Number
 * @b: Number
 */
unsigned int binary_to_uint(const char *b)
{
	int i = _strlen(b) - 1;
	int len = _strlen(b) - 1;
	unsigned int num = 0;

	for (;i >= 0; i--)
	{
		if (b[i] == '1')
			num += calc(i, len);
		else if(b[i] != '0' && b[i] != '1')
			return (0);
	}
	return (num);
}
/**
 * _strlen - returns the length of a string
 * @s: pinter to addres os strign
 *
 * Return: all elements of the stirng
 */
int _strlen(const char *s)
{
	int count = 0;

	for (; s[count]; count++)
		;
	return (count);
}

/**
 * calc - calculates
 * Return: Result
 * @a: Index of the number
 * @b: Lenght of the number
 */

unsigned int calc(int a, int b)
{
	int d = (b - a);
	unsigned int res = 1;

	for (; d > 0; d--)
	{
		res = res * 2;
	}
	return (res);
}
