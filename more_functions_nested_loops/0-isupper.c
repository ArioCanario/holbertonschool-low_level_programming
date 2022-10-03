#include "main.h"
/**
 * _isupper - Check if a character is uppercase
 * Return: 1 if the character is uppercase or 0 otherwise
 *@c: Character to check
 */

int _isupper(int c)
{
	if (c <= 90 && c >= 65)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
