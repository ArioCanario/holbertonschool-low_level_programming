#include "main.h"

/**
 * _isalpha - check if c is a alpha caracter and returns a value
 * Return: 0
 *@c: Is a variable
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
