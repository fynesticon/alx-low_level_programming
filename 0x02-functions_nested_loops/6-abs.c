#include "main.h"
#include "stdio.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: n is an integer
 *
 * Return: Absolute value of integer
 */

int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (-n);
	}
	else
	{
		return (n);
	}
}
