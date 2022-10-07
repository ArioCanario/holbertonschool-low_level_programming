#include "main.h"

/**
 * rev_string - Prints a string the right way and reverse
 * Return: nothing
 * @s: Name of the string
 */

void rev_string(char *s)
{
	int i;
	int l = 0;
	char temp;

	while (s[l] != '\0')
	{
		l++;
	}
	for (i = 0; i < (l / 2); i++)
	{
		temp = s[i];
		s[i] = s[l - i - 1];
		s[l - i - 1] = temp;
	}
}
