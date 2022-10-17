#include "main.h"

/**
 * _islower - Check if its lowercase
 * Return: 0
 *@c: Is a variable
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
