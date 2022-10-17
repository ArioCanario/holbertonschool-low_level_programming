#include "main.h"



int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (squareroot(n, (n + 1) / 2));
	}
}



int squareroot(int n, int x)
{
	if (x < 1)
		return (-1);

	else if (x * x == n)
	{
		return (x);
	}

	else
	{
		return (squareroot(n, x - 1));
	}
}
