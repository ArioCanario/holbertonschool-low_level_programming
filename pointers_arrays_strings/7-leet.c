#include "main.h"

/**
 * *leet - Encode a string to 1337
 * Return: a
 * @a: String
 */

char *leet(char *a)
{
	int i, j;
	char let[] = {97, 65, 101, 69, 111, 79, 116, 84, 108, 76};
	char numb[] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};

	for (i = 0; a[i] != '\0'; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			if (a[i] == let[j])
			{
				a[i] = numb[j];
			}
		}
	}
	return (a);

}
